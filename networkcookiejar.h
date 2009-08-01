#ifndef NETWORKCOOKIEJAR_H
#define NETWORKCOOKIEJAR_H

#include <QNetworkCookieJar>

class NetworkCookieJar : public QNetworkCookieJar
{
public:
    NetworkCookieJar();

    void saveCookies();
    void readCookies();
};

#endif // NETWORKCOOKIEJAR_H
