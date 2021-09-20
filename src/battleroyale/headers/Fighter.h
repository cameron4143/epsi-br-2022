#ifndef BATTLEROYALE_FIGHTER_H
#define BATTLEROYALE_FIGHTER_H

#include <iostream>

using namespace std;

class Fighter {
private:
    string name;
    unsigned int attack;
    unsigned int defense;
    unsigned int speed;

public:
    Fighter();
    void display();
    void play();
};

#endif //BATTLEROYALE_FIGHTER_H
