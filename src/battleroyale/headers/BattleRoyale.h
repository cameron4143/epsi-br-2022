#ifndef BATTLEROYALE_BATTLEROYALE_H
#define BATTLEROYALE_BATTLEROYALE_H

#include <iostream>
#include <vector>

#include "Arena.h"
#include "FighterBot.h"

using namespace std;

class BattleRoyale {
private:
    vector<FighterBot*> fighters;
    int size;
    Arena* arena;

public:
    BattleRoyale(int size);
    ~BattleRoyale();

    /** Accesseurs */
    Arena getArena();

    void recruit(FighterBot* fighter);
    int nbFighterAlive();

    void run();
    void runRound();

};

#endif //BATTLEROYALE_BATTLEROYALE_H
