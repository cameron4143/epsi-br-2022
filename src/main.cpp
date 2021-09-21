#include <iostream>
#include <vector>

#include "BattleRoyale.h"

#include "Ghislain.h"

using namespace std;

int main()
{
    cout << "Battle Royale 2022" << endl;

    Ghislain* ghislain = new Ghislain;
    ghislain->display();
    ghislain->display(" est content :)");


    BattleRoyale* br = new BattleRoyale;


    br->recruit(ghislain);

    br->run();

    return 0;
}
