#ifndef WEBPAGE_H
#define WEBPAGE_H

class WebPage : public QWebPage
{
private:
    //NetworkAccessManager* nam;

public:
    QString userAgentForUrl(const QUrl &url ) const{
        Q_UNUSED(url);
        return QString("Mozilla/5.0 (iPhone; U; CPU iPhone OS 3_1 like Mac OS X; en-us) AppleWebKit/528.18 (KHTML, like Gecko) Version/4.0 Mobile/7C97d Safari/528.16");
    }

    WebPage(){
        QWebPage::QWebPage();
        //setNetworkAccessManager(nam); // para salvar o cookieJar
    }

public slots:
    //void
};

#endif // WEBPAGE_H
