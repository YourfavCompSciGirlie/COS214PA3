// Class definiton for 4. Abstract Factory (Abstract Product)

#ifndef INFANTRY_H
#define INFANTRY_H

#include "LegionUnit.h"
#include "UnitComponent.h"

#include <iostream>
#include <vector>

using namespace std;

class UnitComponent;

class Infantry : public LegionUnit, public UnitComponent {

    protected:
        vector<UnitComponent*> terrainUnits;

    public:
        // Added OWN functions
        Infantry() {}
        virtual ~Infantry() {}

        void add(UnitComponent* unit);
        void remove(UnitComponent* unit);
       
        virtual void move() = 0;
        virtual void attack() = 0;

        virtual int getMobility() = 0;
        virtual int getDefense() = 0;
        virtual int getAttackStrength() = 0;
        virtual int getTerrainAdaptability() = 0;
};

#endif // INFANTRY_H
