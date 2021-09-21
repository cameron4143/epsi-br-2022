#include <algorithm>
#include <ctime>
#include <iostream>
#include <vector>

#include "Arena.h"
#include "BattleRoyale.h"

#include "Ghislain.h"

using namespace std;

int main()
{
    srand(time(NULL));

    cout << "Battle Royale 2022" << endl;

    Ghislain* ghislain1 = new Ghislain;
    ghislain1->moveTo(1, 1);
    ghislain1->display();

    Ghislain* ghislain2 = new Ghislain;
    ghislain2->moveTo(2, 2);
    ghislain2->display();

    BattleRoyale* br = new BattleRoyale(10);
    br->recruit(ghislain1);
    br->recruit(ghislain2);
    br->run();

/*

    Arena* arena = new Arena(10, 10);
    arena->add(ghislain1);
    arena->add(ghislain2);

    arena->display();

    BattleRoyale* br = new BattleRoyale;


    br->recruit(ghislain);

    br->run();
*/
    return 0;
}
