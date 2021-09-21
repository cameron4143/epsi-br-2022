#ifndef BATTLEROYALE_ACTIONMOVE_H
#define BATTLEROYALE_ACTIONMOVE_H

#include <iostream>
#include <vector>

#include "Action.h"

using namespace std;

class ActionAttack : public Action {
private:
    Fighter* target;

public:
    ActionAttack(Fighter* target);

    virtual bool isValid(Fighter* fighter, Arena arena);
    virtual void perform(Fighter* fighter);
};

#endif //BATTLEROYALE_ACTIONMOVE_H
