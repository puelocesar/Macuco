#ifndef WEBVIEW_H
#define WEBVIEW_H

#include <QtWebKit>
#include <QtGui>

#include "flickable.h"
#include "webpage.h"

class WebView : public QWebView, public Flickable
{
    Q_OBJECT

public:
    WebView(QWidget *parent = 0);

protected:
    // reimplement from Flickable
    virtual QPoint scrollOffset() const;

    // reimplement from Flickable
    virtual void setScrollOffset(const QPoint &offset);

protected:

    void keyReleaseEvent(QKeyEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

private:
    WebPage* webPage;
};

#endif // WEBVIEW_H
