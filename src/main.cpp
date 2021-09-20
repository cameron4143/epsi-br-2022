#include <iostream>
#include <vector>

#include "BattleRoyale.h"

#include "Ghislain.h"

using namespace std;

int main()
{
    cout << "Battle Royale 2022" << endl;

    BattleRoyale* br = new BattleRoyale;


    br->recruit(new Ghislain);

    br->run();

    return 0;
}
