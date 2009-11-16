#include "mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    //same size of the N810 screen
    setGeometry(200,200,800,480);

    setWindowIcon(QIcon(":/images/macuco.png"));
    setWindowTitle("Macuco Gmail Client");

    // the zoom values are chosen to be like in Mozilla Firefox 3
    zoomLevels << 30 << 50 << 67 << 80 << 90;
    zoomLevels << 100;
    zoomLevels << 110 << 120 << 133 << 150 << 170 << 200 << 240 << 300;

    currentZoom = 100;

    webView = new WebView(this);
    webView->page()->mainFrame()->setScrollBarPolicy(Qt::Vertical, Qt::ScrollBarAlwaysOff);
    webView->page()->mainFrame()->setScrollBarPolicy(Qt::Horizontal, Qt::ScrollBarAlwaysOff);

    loadingLabel = new QLabel(this);
    loadingLabel->setPixmap( QPixmap(QString::fromUtf8(":/images/spinner.png")) );

    errorBox = new ErrorBox(this);
    errorBox->hide();

    toolbar = new Toolbar(this);
    toolbar->show();

    connect(webView, SIGNAL(loadStarted()), this, SLOT(showLoading()));
    connect(webView, SIGNAL(urlChanged(QUrl)), this, SLOT(changeUrl(QUrl)));
    connect(webView, SIGNAL(loadFinished(bool)), this, SLOT(hideLoading(bool)));
    connect(errorBox->getRetryButton(), SIGNAL(clicked()), this, SLOT(reload()));

    connect(webView->page()->networkAccessManager(), SIGNAL(finished(QNetworkReply*)), 
            this, SLOT(finishedRequest(QNetworkReply*)));
}

MainWindow::~MainWindow()
{
}

void MainWindow::showLoading()
{
    errorBox->hide();
    hideOverlayOnPage();
    loadingLabel->show();
}

void MainWindow::changeUrl(QUrl url)
{
    currentUrl = url;
}

void MainWindow::hideLoading(bool success)
{
    loadingLabel->hide();
    hideOverlayOnPage();

    if (success) {
        errorBox->hide();
    } else {
        showOverlayOnPage();
        errorBox->show();
    }
}

void MainWindow::reload()
{
    webView->load(currentUrl);
    errorBox->hide();
    hideOverlayOnPage();
}

void MainWindow::adjustSizes()
{
    webView->setGeometry(0, 0, width(), height()); //webview cover the entire window
    loadingLabel->setGeometry( width()/2 - 45, height()/2 - 45, 90, 90); //put the label on the center
    errorBox->setGeometry( width()/2 - 150, height()/2 - 75, 300, 150); //put the error box on the center
    toolbar->setGeometry( 0, 450, 800, 30 );
}

void MainWindow::resizeEvent(QResizeEvent* event)
{
    adjustSizes();
    QWidget::resizeEvent(event);
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    webView->webPage->saveCookies();
    event->accept();
}

void MainWindow::showOverlayOnPage()
{
    //TODO: is there a better way to put a transparent overlay on the screen?
    QString script =
           "newDiv = document.createElement(\"div\");"
           "newDiv = document.createElement(\"div\");"
           "newDiv.innerHTML = \"<div id='divOverlay' style='width: 100%; height: 100%; background: white;"
           "position: absolute; top: 0; left: 0; opacity: 0.8'></div>\";"
           "my_div = document.getElementById(\"body\");"
           "document.body.appendChild(newDiv);";

    webView->page()->mainFrame()->evaluateJavaScript(script);
}

void MainWindow::hideOverlayOnPage()
{
    QString script = "node = document.getElementById(\"divOverlay\");"
                     "node.parentNode.removeChild(node);";

    webView->page()->mainFrame()->evaluateJavaScript(script);
}

void MainWindow::finishedRequest(QNetworkReply* reply)
{
    if (reply->error() != QNetworkReply::NoError)
    	qDebug() << reply->errorString();
}

void MainWindow::zoomIn()
{
    disableWebkitAutoSize();

    int i = zoomLevels.indexOf(currentZoom);
    if (i < zoomLevels.count() - 1)
        currentZoom = zoomLevels[i + 1];

    webView->setZoomFactor(qreal(currentZoom)/100.0);
}

void MainWindow::zoomOut()
{
    disableWebkitAutoSize();

    int i = zoomLevels.indexOf(currentZoom);
    if (i > 0)
        currentZoom = zoomLevels[i - 1];

    webView->setZoomFactor(qreal(currentZoom)/100.0);
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_F7)
	zoomIn();
    else if (event->key () == Qt::Key_F8)
	zoomOut();
}

void MainWindow::disableWebkitAutoSize()
{
    webView->page()->mainFrame()->evaluateJavaScript("document.body.style.WebkitTextSizeAdjust = 'auto'");
}
