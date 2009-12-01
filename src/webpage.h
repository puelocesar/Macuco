#ifndef WEBPAGE_H
#define WEBPAGE_H

#include "networkcookiejar.h"

class WebPage : public QWebPage
{
private:
    NetworkCookieJar* cookieJar;

public:
    QString userAgentForUrl(const QUrl &url ) const{
        Q_UNUSED(url);
        return QString("Mozilla/5.0 (iPhone; U; CPU iPhone OS 3_1 like Mac OS X; en-us) AppleWebKit/528.18 (KHTML, like Gecko) Version/4.0 Mobile/7C97d Safari/528.16");
    }

    WebPage(){
        QWebPage::QWebPage();

        cookieJar = new NetworkCookieJar;
        networkAccessManager()->setCookieJar(cookieJar);

        settings()->setAttribute( QWebSettings::OfflineStorageDatabaseEnabled, true );
        settings()->setAttribute( QWebSettings::LocalStorageEnabled, true );
    }

    void saveCookies()
    {
        cookieJar->saveCookies();
    }

public slots:
    //void
};

#endif // WEBPAGE_H
