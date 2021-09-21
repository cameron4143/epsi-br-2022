#include <iostream>

#include "ActionMove.h"
#include "Ghislain.h"

using namespace std;

Ghislain::Ghislain() : FighterBot("Ghislain", 9, 10, 11) {
    cout << "Je suis Ghislain !!" << endl;
}

Action* Ghislain::choose(Arena arena) {
    return new ActionMove(-1, -1);
}
