#include <algorithm>
#include <iostream>

#include "ActionMove.h"
#include "ActionAttack.h"
#include "Cam.h"

using namespace std;

Cam::Cam() : FighterBot("Cam", 15, 15, 0) {
    this->targetId = "";
    this->setStatus("content");
}

Fighter Cam::selectTarget(Arena arena) {
    vector<Fighter> fighters = arena.get();
    Fighter target = *this;

    if (this->targetId == "") {
        bool onlyCam = true;
        for (Fighter fighter : fighters) {
            if (fighter.getName() != "Cam") {
                onlyCam = false;
                break;
            }
        }

        if (onlyCam) {
            while (target.isMe(this)) {
                target = fighters[rand() % fighters.size()];
            }
        } else {
            while (target.isMe(this) || (target.getName() == "Cam")) {
                target = fighters[rand() % fighters.size()];
            }
        }
        this->targetId = target.getId();
        this->display(" désigne comme cible " + target.getNameId());

    } else {
        bool found = false;
        for (Fighter fighter : fighters) {
            if (fighter.getId() == this->targetId) {
                target = fighter;
                found = true;
            }
        }
        if (!found) {
            this->targetId = "";
            target = this->selectTarget(arena);
        }
    }

    return target;
}

Action* Cam::choose(Arena arena) {
    Action* action = nullptr;

    Fighter target = this->selectTarget(arena);

    if (target.isHere(this)) {
        action = new ActionAttack(target);

    } else {
        action = new ActionMove(target.getX() - this->getX(), target.getY() - this->getY());
    }

    return action;
}
