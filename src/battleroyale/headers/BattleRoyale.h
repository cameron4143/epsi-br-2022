#ifndef BATTLEROYALE_BATTLEROYALE_H
#define BATTLEROYALE_BATTLEROYALE_H

#include <iostream>
#include <vector>

#include "Arena.h"
#include "Fighter.h"

using namespace std;

class BattleRoyale {
private:
    vector<Fighter*> fighters;
    int size;
    Arena* arena;

public:
    BattleRoyale(int size);
    ~BattleRoyale();

    /** Accesseurs */
    Arena getArena();

    void recruit(Fighter* fighter);
    int nbFighterAlive();

    void run();
    void runRound();

};

#endif //BATTLEROYALE_BATTLEROYALE_H
