#ifndef BATTLEROYALE_ARENA_H
#define BATTLEROYALE_ARENA_H

#include <iostream>
#include <vector>

#include "Fighter.h"

using namespace std;

class Arena {
private:
    vector<Fighter*> fighters;
    int width;
    int height;

public:
    Arena(int width, int height);

    int getWidth();
    int getHeight();

    void add(Fighter* fighter);

    void display();
};

#endif //BATTLEROYALE_ARENA_H
