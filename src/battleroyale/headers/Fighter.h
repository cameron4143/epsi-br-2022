#ifndef BATTLEROYALE_FIGHTER_H
#define BATTLEROYALE_FIGHTER_H

#include <iostream>

using namespace std;

class Fighter {
private:
    /** Nom du combattant */
    string name;

    /** Statisitques réglables par les héritiers */
    int attack;
    int defense;
    int speed;

    /** Attributs gérés par le moteur de jeu */
    /** Niveau de vie du combattant */
    int life;

    /** Position */
    int x, y;

public:
    /** Constructeur */
    Fighter(string name, int attack, int defense, int speed);

    /** Accesseurs publics */
    string getName();
    int getAttack();
    int getDefense();
    int getSpeed();
    int getLife();
    int getX();
    int getY();

    /** Affichage */
    void display();
    void display(string message);
};

#endif //BATTLEROYALE_FIGHTER_H
