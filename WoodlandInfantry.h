#ifndef WOODLANDINFANTRY_H
#define WOODLANDINFANTRY_H

#include "Infantry.h"

#include <iostream>

class WoodlandInfantry : public Infantry {

    private:
        int mobility;
        int defense;
        int attackStrength;
        int terrainAdaptability;

    public:
        // Added OWN functions
        WoodlandInfantry();
        ~WoodlandInfantry();

        // Added functions for strategic decision-making
        int getMobility();
        int getDefense();
        int getAttackStrength();
        int getTerrainAdaptability();

        void move();
        void attack();
};

#endif // WOODLANDINFANTRY_H
