#include "mainwindow.h"
#include <QMovie>

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    setWindowState(Qt::WindowMaximized);

    webView = new WebView(this);

    QMovie* loadingMovie = new QMovie(":/images/loading.gif");
    loadingMovie->start();

    loadingLabel = new QLabel(this);
    loadingLabel->setMovie(loadingMovie);
    loadingLabel->setScaledContents(true);

    errorBox = new QFrame(this);
    errorBox->hide();

    QLabel* label = new QLabel(errorBox);
    label->setText("<b>erro ao carregar url</b>");

    connect(webView->page(), SIGNAL(loadStarted()), this, SLOT(showLoading()));
    connect(webView->page(), SIGNAL(loadFinished(bool)), this, SLOT(hideLoading(bool)));
}

MainWindow::~MainWindow()
{
}

void MainWindow::showLoading()
{
    loadingLabel->show();
}

void MainWindow::hideLoading(bool success)
{
    loadingLabel->hide();

    if (!success)
    {
        qDebug() << "erro ao carregar";
        errorBox->show();
        //mostra mensagem de erro/retry
    }
}

void MainWindow::adjustSizes()
{
    webView->setGeometry(0, 0, width(), height()); //webview cover the entire window
    loadingLabel->setGeometry( width()/2 - 45, height()/2 - 45, 90, 90); //put the label on the center
    errorBox->setGeometry( width()/2 - 45, height()/2 - 20, 90, 40); //put the error box on the center
}

void MainWindow::resizeEvent(QResizeEvent* event)
{
    adjustSizes();
    QWidget::resizeEvent(event);
}
