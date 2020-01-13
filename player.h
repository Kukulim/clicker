#ifndef PLAYER_H
#define PLAYER_H

#include "enemy.h"

class Player
{
public:
    Player();

    int attackPower=1;

    int helmLvl=0;
    int amuletLvl=0;
    int shieldLvl=0;
    int ArmorLvl=0;
    int weaponLvl=0;
    int glovesLvl=0;
    int pantsLvl=0;
    int ringLvl=0;
    int shoesLvl=0;
};

#endif // PLAYER_H
