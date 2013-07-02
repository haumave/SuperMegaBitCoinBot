// леш, я хочу все перехерачить

#include <QApplication>
#define BUY +1
#define SELL -1


int botRun ()
{
    return 0;
}

int botKernel (int * lowPrices, int * highPrices) {
    int decision = 0;

    if (lowPrices[0] < lowPrices[1])
        decision = BUY;
    else if (lowPrices[0] > lowPrices[1])
        decision = SELL;


    return decision;
}
