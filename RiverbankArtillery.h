#ifndef RIVERBANKARTILLERY_H
#define RIVERBANKARTILLERY_H

#include "Artillery.h"

#include <iostream>

class RiverbankArtillery : public Artillery {

    private:
        int mobility;
        int defense;
        int attackStrength;
        int terrainAdaptability;
    
    public:
        // Added OWN function
        RiverbankArtillery();
        ~RiverbankArtillery();

        // Added functions for strategic decision-making
        int getMobility();
        int getDefense();
        int getAttackStrength();
        int getTerrainAdaptability();

        void move();
        void attack();
};

#endif // RIVERBANKARTILLERY_H
