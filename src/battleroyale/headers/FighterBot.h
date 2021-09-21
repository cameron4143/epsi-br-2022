#ifndef BATTLEROYALE_FIGHTERBOT_H
#define BATTLEROYALE_FIGHTERBOT_H

#include <iostream>

#include "Action.h"
#include "Arena.h"
#include "Fighter.h"

using namespace std;

class FighterBot : public Fighter {

public:
    /** Constructeur */
    FighterBot(string name, int attack, int defense, int speed);

    /** Accesseurs publics */
    string getName();
    virtual Action* choose(Arena arena) = 0;
};

#endif //BATTLEROYALE_FIGHTERBOT_H
