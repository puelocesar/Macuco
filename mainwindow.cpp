#include "mainwindow.h"
#include <QMovie>

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    //same size of the N810 screen
    setGeometry(200,200,800,480);

    webView = new WebView(this);

    QMovie* loadingMovie = new QMovie(":/images/loading.gif");
    loadingMovie->start();

    loadingLabel = new QLabel(this);
    loadingLabel->setMovie(loadingMovie);
    loadingLabel->setScaledContents(true);

    errorBox = new ErrorBox(this);
    errorBox->hide();

    connect(webView->page(), SIGNAL(loadStarted()), this, SLOT(showLoading()));
    connect(webView->page(), SIGNAL(loadFinished(bool)), this, SLOT(hideLoading(bool)));
    connect(errorBox->getRetryButton(), SIGNAL(clicked()), this, SLOT(reload()));
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

    if (success) {
        errorBox->hide();
    } else {
        errorBox->show();
    }
}

void MainWindow::reload()
{
    webView->reload();
}

void MainWindow::adjustSizes()
{
    webView->setGeometry(0, 0, width(), height()); //webview cover the entire window
    loadingLabel->setGeometry( width()/2 - 45, height()/2 - 45, 90, 90); //put the label on the center
    errorBox->setGeometry( width()/2 - 150, height()/2 - 75, 300, 150); //put the error box on the center
}

void MainWindow::resizeEvent(QResizeEvent* event)
{
    adjustSizes();
    QWidget::resizeEvent(event);
}
