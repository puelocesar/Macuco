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

    // reimplement resize event to adapt layout
    void resizeEvent(QResizeEvent* event);

private slots:
    //called when a "loading page" is started
    void showLoading();

    //called when a "loading page" is finished
    void hideLoading(bool success);

    //reload the page
    void reload();
};

#endif // MAINWINDOW_H
