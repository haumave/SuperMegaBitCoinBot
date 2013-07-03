#include <QDebug>
#include <vector>
#include "botcore.h"

botCore::botCore()
{
    qDebug () << "botCore running";
    this->cashedUSD = 0;
}

int botCore::process ( std::vector <int> &lastRates ) // I get last five rates
{
    float differenceBetweenFirstAndLast = lastRates[4] - lastRates[0];
    float differenceBetweenSecondAndFourth = lastRates[3] - lastRates[1];

    /*
    if ( lastRates[] ) // nothing happens — idling
    {
        return -1;
    }

    if ( ) // going down — buy dollars
    {
        return 0;
    }

    if (  ) // going up — buy BTC
    {
        return 1;
    }
    */
}

