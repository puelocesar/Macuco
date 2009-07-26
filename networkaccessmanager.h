#ifndef NETWORKACCESSMANAGER_H
#define NETWORKACCESSMANAGER_H

#include <QNetworkAccessManager>

class NetworkAccessManager : public QNetworkAccessManager
{
public:
    NetworkAccessManager(QObject* parent = 0);
};

#endif // NETWORKACCESSMANAGER_H
