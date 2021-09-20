#ifndef BATTLEROYALE_BATTLEROYALE_H
#define BATTLEROYALE_BATTLEROYALE_H

#include <iostream>

#include "Fighter.h"

using namespace std;

class BattleRoyale {

public:
    void run();
    void recruit(Fighter* fighter);
};

#endif //BATTLEROYALE_BATTLEROYALE_H
