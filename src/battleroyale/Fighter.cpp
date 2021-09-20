#include <iostream>

#include "Fighter.h"

using namespace std;

Fighter::Fighter() {
    this->attack = 10;
    this->defense = 10;
    this->speed = 10;
}

void Fighter::display() {
    cout << this->name;
}
