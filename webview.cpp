#include "webview.h"

WebView::WebView(QWidget *parent)
        : QWebView(parent) {
    setAttribute(Qt::WA_OpaquePaintEvent, true);
    setAttribute(Qt::WA_NoSystemBackground, true);

    setMouseTracking(true);
    Flickable::setAcceptMouseClick(this);

    webPage = new WebPage();

    setPage((QWebPage*) webPage);
    setUrl(QUrl("http://mail.google.com"));
    setWindowTitle("GMail Mobile App");

    setZoomFactor(1.25);
}

// reimplement from Flickable
QPoint WebView::scrollOffset() const {
    QWebFrame *frame = page()->mainFrame();
    return QPoint(0, frame->evaluateJavaScript("window.scrollY").toInt());
}

// reimplement from Flickable
void WebView::setScrollOffset(const QPoint &offset) {
    QWebFrame *frame = page()->mainFrame();
    if (frame)
        frame->evaluateJavaScript(QString("window.scrollTo(%1,%2);").arg(offset.x()).arg(offset.y()));
}

void WebView::keyReleaseEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_Down) {
        setScrollOffset( QPoint(0, scrollOffset().x() + 20) );
        return;
    }
    if (event->key() == Qt::Key_Up) {
        setScrollOffset( QPoint(0, scrollOffset().x() - 20) );
        return;
    }
}

void WebView::mousePressEvent(QMouseEvent *event) {
    Flickable::handleMousePress(event);
    if (event->isAccepted())
        return;

    QWebView::mousePressEvent(event);
}

void WebView::mouseMoveEvent(QMouseEvent *event) {
    Flickable::handleMouseMove(event);
}

void WebView::mouseReleaseEvent(QMouseEvent *event) {
    Flickable::handleMouseRelease(event);
    if (event->isAccepted())
        return;

    QWebView::mouseReleaseEvent(event);
}
