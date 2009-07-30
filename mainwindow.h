#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include "webview.h"
#include "errorbox.h"

#include <QLabel>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    virtual ~MainWindow();

    //manually adapt layout to new size
    void adjustSizes();

private:
    // mainWindow components
    WebView* webView;
    QLabel* loadingLabel;
    ErrorBox* errorBox;

    QUrl currentUrl;

    // reimplement resize event to adapt layout
    void resizeEvent(QResizeEvent* event);

    //white overlay behind the error message
    void showOverlayOnPage();
    void hideOverlayOnPage();

private slots:
    //called when a "loading page" is started
    void showLoading();

    //called when the url is changed. The url will be used on the retry action
    void changeUrl(QUrl url);

    //called when a "loading page" is finished
    void hideLoading(bool success);

    //reload the page
    void reload();

    //request
    void finishedRequest(QNetworkReply* reply);
};

#endif // MAINWINDOW_H
