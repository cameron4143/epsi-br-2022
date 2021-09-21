#ifndef BATTLEROYALE_ACTION_H
#define BATTLEROYALE_ACTION_H

#include <iostream>
#include <vector>

#include "Arena.h"
#include "Fighter.h"

using namespace std;

class Action {
private:
    string name;

public:
    Action(string name);

    string getName();

    virtual bool isValid(Fighter* fighter, Arena arena) = 0;
    virtual void perform(Fighter* fighter) = 0;
};

#endif //BATTLEROYALE_ACTION_H
