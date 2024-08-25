#ifndef OPENFIELDINFANTRY_H
#define OPENFIELDINFANTRY_H

#include "Infantry.h"

#include <iostream>

class OpenFieldInfantry : public Infantry {

    private:
        int mobility;
        int defense;
        int attackStrength;
        int terrainAdaptability;

    public:
        // Added OWN functions
        OpenFieldInfantry();
        ~OpenFieldInfantry();

        // Added functions for strategic decision-making
        int getMobility();
        int getDefense();
        int getAttackStrength();
        int getTerrainAdaptability();

        void move();
        void attack();
};

#endif // OPENFIELDINFANTRY_H
