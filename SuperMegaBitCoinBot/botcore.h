#ifndef BOTCORE_H
#define BOTCORE_H

#include <vector>

class botCore
{
public:
    botCore();

    int process ( std::vector <int> &lastRates );
};

#endif // BOTCORE_H
