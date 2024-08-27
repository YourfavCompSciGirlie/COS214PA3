#ifndef FORTIFICATION_H
#define FORTIFICATION_H

#include "BattleStrategy.h"

#include <iostream>

class Fortification : public BattleStrategy {
    
    public:
        Fortification() { 
            name = "Fortification";  // Set the name in the constructor
        }
        void engage(std::vector<LegionUnit*> units);
};

#endif // FORTIFICATION_H

