#include "mainwindow.h"
#include <QMovie>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    setWindowState(Qt::WindowMaximized);

    webView = new WebView(this);

    QMovie* loadingMovie = new QMovie(":/images/loading.gif");
    loadingMovie->start();

    loadingLabel = new QLabel(this);
    loadingLabel->setMovie(loadingMovie);
    loadingLabel->setScaledContents(true);

    connect(webView->page(), SIGNAL(loadStarted()), this, SLOT(showLoading()));
    connect(webView->page(), SIGNAL(loadFinished(bool)), this, SLOT(hideLoading()));
}

MainWindow::~MainWindow()
{
}

void MainWindow::showLoading()
{
    loadingLabel->show();
}

void MainWindow::hideLoading()
{
    loadingLabel->hide();
}

void MainWindow::adjustSizes()
{
    webView->setGeometry(0, 0, width(), height()); //webview cover the entire window
    loadingLabel->setGeometry( width()/2 - 45, height()/2 - 45, 90, 90); //put the label on the center
}

void MainWindow::resizeEvent(QResizeEvent* event)
{
    adjustSizes();
    QWidget::resizeEvent(event);
}
