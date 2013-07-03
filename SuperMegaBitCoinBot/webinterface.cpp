#define API_URL "https://btc-e.com/tapi"
#define IN_DOLLARS 1;
#define IN_BITCOINS 2;

#include <QDebug>
#include <vector>
#include "webinterface.h"

webInterface::webInterface( QString *APIKey, QString *secretKey )
{
    qDebug () << "WebInterface called";
}

std::vector<int> webInterface::getLastRates ()
{
    std::vector<int> result;
    // processing
    return result;
}

float webInterface::getBTCRate ()
{
    return 0;
}

float webInterface::getBalance ( int valute )
{
    return 0;
}

bool webInterface::buyBTC ( int amount )
{
    return true;
}

bool webInterface::buyUSD ( int amount )
{
    return true;
}

void webInterface::loadFinished ( QNetworkReply *reply )
{
    qDebug () << "Loading finished";
    //this->updateGUI (  ) ;
}
