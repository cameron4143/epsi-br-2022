#include <iostream>

#include "Action.h"

using namespace std;

Action::Action(string name) {
    this->name = name;
}

string Action::getName() { return this->name; }
