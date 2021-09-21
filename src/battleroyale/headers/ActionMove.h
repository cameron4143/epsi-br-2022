#ifndef BATTLEROYALE_ACTIONMOVE_H
#define BATTLEROYALE_ACTIONMOVE_H

#include <iostream>
#include <vector>

#include "Action.h"

using namespace std;

class ActionMove : public Action {
private:
    int x;
    int y;

public:
    ActionMove(int x, int y);

    virtual bool isValid(Fighter* fighter, Arena arena);
    virtual void perform(Fighter* fighter);
};

#endif //BATTLEROYALE_ACTIONMOVE_H
