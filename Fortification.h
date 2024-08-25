#ifndef FORTIFICATION_H
#define FORTIFICATION_H

#include "BattleStrategy.h"

#include <iostream>

class Fortification : public BattleStrategy {
    
    public:
        virtual void engage(std::vector<LegionUnit*> units);
};

#endif // FORTIFICATION_H

