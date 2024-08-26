#ifndef WOODLANDARTILLERY_H
#define WOODLANDARTILLERY_H

#include "Artillery.h"

#include <iostream>

class WoodlandArtillery : public Artillery {

    private:
        int mobility;
        int defense;
        int attackStrength;
        int terrainAdaptability;

    public:
        // Added OWN functions
        WoodlandArtillery();
        ~WoodlandArtillery();

        // Added functions for strategic decision-making
        int getMobility();
        int getDefense();
        int getAttackStrength();
        int getTerrainAdaptability();

        void move();
        void attack();
};

#endif // WOODLANDARTILLERY_H
