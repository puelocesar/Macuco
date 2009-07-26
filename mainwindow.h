#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include "webview.h"

#include <QLabel>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    virtual ~MainWindow();
    void adjustSizes();

private:
    WebView* webView;
    QLabel* loadingLabel;
    void resizeEvent(QResizeEvent* event);

private slots:
    void showLoading();
    void hideLoading();
};

#endif // MAINWINDOW_H
