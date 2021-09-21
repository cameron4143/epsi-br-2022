#include <iostream>

#include "ActionMove.h"

using namespace std;

ActionMove::ActionMove(int x, int y) : Action("Move") {
    this->x = x;
    this->y = y;
}

bool ActionMove::isValid(Fighter* fighter, Arena arena) {
    int x = fighter->getX();
    int y = fighter->getY();

    return  ((this->x < 0 && x > 0) || (this->x > 0 && x < arena.getWidth())) &&
            ((this->y < 0 && y > 0) || (this->y > 0 && y < arena.getHeight()));
}

void ActionMove::perform(Fighter* fighter) {
    int x = fighter->getX();
    int y = fighter->getY();

    if (this->x < 0) {
        x += -1;
    } else if (this->x > 0) {
        x += 1;
    }
    if (this->y < 0) {
        y += -1;
    } else if (this->y > 0) {
        y += 1;
    }

    fighter->moveTo(x, y);
}