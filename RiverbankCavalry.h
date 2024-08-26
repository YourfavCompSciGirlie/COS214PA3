#ifndef RIVERBANKCAVALRY_H
#define RIVERBANKCAVALRY_H

#include "Cavalry.h"

#include <iostream>

class RiverbankCavalry : public Cavalry {

    private:
        int mobility;
        int defense;
        int attackStrength;
        int terrainAdaptability;    

    public:
        // Added OWN functions
        RiverbankCavalry();
        ~RiverbankCavalry();

        // Added functions for strategic decision-making
        int getMobility();
        int getDefense();
        int getAttackStrength();
        int getTerrainAdaptability();

        void move();
        void attack();
};

#endif // RIVERBANKCAVALRY_H
