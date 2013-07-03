#ifndef WEBINTERFACE_H
#define WEBINTERFACE_H

#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <vector>
#include "mainwindow.h"

class webInterface : MainWindow
{
private slots:
    void loadFinished ( QNetworkReply *reply );
    void doPOST ();
public:
    webInterface ( QString *apiKey, QString *secretKey );
    std::vector<int> getLastRates ();
    float getBTCRate ();
    float getBalance ( int valute );
    bool buyUSD ( int amount );
    bool buyBTC ( int amount );
};

#endif // WEBINTERFACE_H
