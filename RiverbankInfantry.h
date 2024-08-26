#ifndef RIVERBANKINFANTRY_H
#define RIVERBANKINFANTRY_H

#include "Infantry.h"

using namespace std;

class RiverbankInfantry : public Infantry {

    private:
        int mobility;
        int defense;
        int attackStrength;
        int terrainAdaptability;
    
    public:
        // Added OWN functions
        RiverbankInfantry();
        ~RiverbankInfantry();

        // Added functions for strategic decision-making
        int getMobility();
        int getDefense();
        int getAttackStrength();
        int getTerrainAdaptability();

        void move();
        void attack();
};

#endif // RIVERBANKINFANTRY_H
