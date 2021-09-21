#include <algorithm>
#include <iostream>

#include "BattleRoyale.h"
#include "Fighter.h"

using namespace std;

BattleRoyale::BattleRoyale(int size) {
    this->size = size;
    this->arena = new Arena(size, size);
}
BattleRoyale::~BattleRoyale() {
    delete this->arena;
}


Arena BattleRoyale::getArena() { return (*this->arena); }


void BattleRoyale::recruit(Fighter* fighter) {
    fighter->moveTo(rand() % this->size, rand() % this->size);
    this->arena->add(fighter);
    this->fighters.push_back(fighter);
}

void BattleRoyale::run() {
    int round = 1;
    while (this->nbFighterAlive() > 1 && round < 10) {
        cout << "## ROUND " << round << endl;
        this->arena->display();

        this->runRound();
        round++;
    }
}

int BattleRoyale::nbFighterAlive() {
    int count = 0;
    for (int i = 0; i < this->fighters.size(); i++) {
        if (this->fighters[i]->getLife() > 0) {
            count++;
        }
    }
    return count;
}

void BattleRoyale::runRound() {

}

