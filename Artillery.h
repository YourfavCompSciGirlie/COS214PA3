// Class definition for 4. Abstract Factory (Abstract Product)

#ifndef ARTILLERY_H
#define ARTILLERY_H

#include "LegionUnit.h"
#include "UnitComponent.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class UnitComponent;

class Artillery : public LegionUnit, public UnitComponent {
    
    protected:
        vector<UnitComponent*> terrainUnits;

    public:
        // Added OWN functions
        Artillery() {}
        virtual ~Artillery() {}

        void add(UnitComponent* unit);
        void remove(UnitComponent* unit);
        
        virtual void move() = 0;
        virtual void attack() = 0;

        virtual int getMobility() = 0;
        virtual int getDefense() = 0;
        virtual int getAttackStrength() = 0;
        virtual int getTerrainAdaptability() = 0;
};

#endif // ARTILLERY_H
