#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include "webview.h"
#include "errorbox.h"
#include "toolbar.h"
#include "minifiedtoolbar.h"

#include <QLabel>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    virtual ~MainWindow();

    //manually adapt layout to new size
    void adjustSizes();

    void keyPressEvent(QKeyEvent *event);

    WebView* webView;

private:
    // mainWindow components
    QLabel* loadingLabel;
    ErrorBox* errorBox;
    Toolbar* toolbar;
    MinifiedToolbar* miniToolbar;

    QUrl currentUrl;

    QVector<int> zoomLevels;
    int currentZoom;

    // reimplement resize event to adapt layout
    void resizeEvent(QResizeEvent* event);

    //intercepts close event
    void closeEvent(QCloseEvent *event);

    //white overlay behind the error message
    void showOverlayOnPage();
    void hideOverlayOnPage();

    void zoomIn();
    void zoomOut();

    void disableWebkitAutoSize();

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

    //toolbar visibility control
    void showToolbar();
    void hideToolbar();

    //visit url
    void visitUrl(QString);
};

#endif // MAINWINDOW_H
