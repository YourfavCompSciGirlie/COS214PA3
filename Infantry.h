#ifndef INFANTRY_H
#define INFANTRY_H

#include "LegionUnit.h"
#include "UnitComponent.h"
#include <iostream>

class Infantry : public LegionUnit, public UnitComponent {
    protected:
        vector<UnitComponent*> terrainUnits;

    public:
        void add(UnitComponent* unit);
        void remove(UnitComponent* unit);
        // Added OWN functions
        Infantry();
        virtual ~Infantry();

        virtual void move() = 0;
        virtual void attack() = 0;
};

#endif // INFANTRY_H
