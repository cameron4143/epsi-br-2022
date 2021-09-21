#include <iostream>

#include "ActionAttack.h"

using namespace std;

ActionAttack::ActionAttack(Fighter* target) : Action("Attack") {
    this->target = target;
}

bool ActionAttack::isValid(Fighter* fighter, Arena arena) {
    return fighter->isHere(target->getX(), target->getY());
}

void ActionAttack::perform(Fighter* fighter) {
    // TODO :'(
}