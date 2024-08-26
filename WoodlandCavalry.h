#ifndef WOODLANDCAVALRY_H
#define WOODLANDCAVALRY_H

#include "Cavalry.h"

#include <iostream>

class WoodlandCavalry : public Cavalry {

    private:
        int mobility;
        int defense;
        int attackStrength;
        int terrainAdaptability;

    public:
        // Added OWN functions
        WoodlandCavalry();
        ~WoodlandCavalry();

        // Added functions for strategic decision-making
        int getMobility();
        int getDefense();
        int getAttackStrength();
        int getTerrainAdaptability();

        void move();
        void attack();
};

#endif // WOODLANDCAVALRY_H
