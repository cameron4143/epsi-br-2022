#include <iostream>

#include "Arena.h"

using namespace std;

Arena::Arena(int width, int height) {
    this->width = width;
    this->height = height;
}

int Arena::getWidth() { return this->width; }
int Arena::getHeight() { return this->height; }


void Arena::add(Fighter* fighter) {
    fighters.push_back(fighter);
}

void Arena::display() {
    string maCase;
    for (int j = 0; j < this->width; j++) {
        cout << "|";
        for (int i = 0; i < this->height; i++) {
            maCase = "";
            for (unsigned int k = 0; k < this->fighters.size() && maCase.size() < 2; k++) {
                if (this->fighters[k]->isHere(i, j)) {
                    maCase += this->fighters[k]->getName()[0];
                }
            }

            if (maCase.size() < 1) {
                maCase += "  ";
            } else if (maCase.size() < 2) {
                maCase += " ";
            }

            cout << maCase << "|";
        }
        cout << endl;
    }
}