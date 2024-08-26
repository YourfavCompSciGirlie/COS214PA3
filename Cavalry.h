#ifndef CAVALRY_H
#define CAVALRY_H

#include "LegionUnit.h"
#include "UnitComponent.h"
#include <iostream>
#include <vector>
using namespace std;

class Cavalry : public LegionUnit, public UnitComponent {//also leaf class for UnitComponent
    protected:
        vector<UnitComponent*> terrainUnits;
    public:
        // Added OWN function
        Cavalry();
        void add(UnitComponent* unit);
        void remove(UnitComponent* unit);
        virtual ~Cavalry();

        virtual void move() = 0;
        virtual void attack() = 0;

        virtual int getMobility() = 0;
        virtual int getDefense() = 0;
        virtual int getAttackStrength() = 0;
        virtual int getTerrainAdaptability() = 0;

};

#endif // CAVALRY_H
