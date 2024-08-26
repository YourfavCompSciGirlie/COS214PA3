#ifndef OPENFIELDARTILLERY_H
#define OPENFIELDARTILLERY_H

#include "Artillery.h"

#include <iostream>

class OpenFieldArtillery : public Artillery {

    private:
        int mobility;
        int defense;
        int attackStrength;
        int terrainAdaptability;
    
    public:
        // Added OWN functions
        OpenFieldArtillery();
        ~OpenFieldArtillery();

        // Added functions for strategic decision-making
        int getMobility();
        int getDefense();
        int getAttackStrength();
        int getTerrainAdaptability();

        void move();
        void attack();
};

#endif // OPENFIELDARTILLERY_H
