#ifndef OPENFIELDCAVALRY_H
#define OPENFIELDCAVALRY_H

#include "Cavalry.h"

#include <iostream>

class OpenFieldCavalry : public Cavalry {

    private:
        int mobility;
        int defense;
        int attackStrength;
        int terrainAdaptability;
    
    public:
        // Added OWN functions
        OpenFieldCavalry();
        ~OpenFieldCavalry();

        // Added functions for strategic decision-making
        int getMobility();
        int getDefense();
        int getAttackStrength();
        int getTerrainAdaptability();

        void move();
        void attack();
};

#endif // OPENFIELDCAVALRY_H
