#ifndef FIGHTERS_Cam_H
#define FIGHTERS_Cam_H

#include <iostream>

#include "FighterBot.h"

using namespace std;

class Cam: public FighterBot {
private:
    string targetId;

    Fighter selectTarget(Arena arena);

public:
    Cam();

    virtual Action* choose(Arena arena);
};

#endif //FIGHTERS_Cam_H
