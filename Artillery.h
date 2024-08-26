#ifndef ARTILLERY_H
#define ARTILLERY_H

#include "LegionUnit.h"
#include "UnitComponent.h"
#include <iostream>
#include <string>
#include <vector>

class Artillery : public LegionUnit, public UnitComponent  {
    protected:
        vector<UnitComponent*> terrainUnits;
    public:
        void add(UnitComponent* unit);
        void remove(UnitComponent* unit);
        virtual ~Artillery() {}
        virtual void move() = 0;
        virtual void attack() = 0;
};

#endif // ARTILLERY_H
