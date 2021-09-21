#include <iostream>

#include "Fighter.h"

using namespace std;

Fighter::Fighter(string name, int attack, int defense, int speed) {
    this->name = name;
    // Controle de valeurs valides
    if (attack > 0 && defense > 0 && speed > 0 && (attack + defense + speed <= 30)) {
        this->attack = attack;
        this->defense = defense;
        this->speed = speed;
    } else {
        this->attack = 10;
        this->defense = 10;
        this->speed = 10;
    }
    this->life = 100;
}

/** Accesseurs */
string Fighter::getName() { return this->name; }
int Fighter::getAttack() { return this->attack; }
int Fighter::getDefense() { return this->defense; }
int Fighter::getSpeed() { return this->speed; }
int Fighter::getLife() { return this->life; }
int Fighter::getX() { return this->x; }
int Fighter::getY() { return this->y; }


void Fighter::display() { this->display(""); }
void Fighter::display(string message) {
    cout << this->name
        << "("
        << this->attack << "/"
        << this->defense << "/"
        << this->speed << ") ["
        << this->life << "]" << message << endl;
}
