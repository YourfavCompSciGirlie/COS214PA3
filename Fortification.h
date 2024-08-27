// Class definition for 5. Strategy (Concrete Strategy)

#ifndef FORTIFICATION_H
#define FORTIFICATION_H

#include "BattleStrategy.h"

#include <iostream>

using namespace std;

class Fortification : public BattleStrategy {
    
    public:
        Fortification() { 
            name = "Fortification";  // Set the name in the constructor
        }
        void engage(std::vector<LegionUnit*> units);
};

#endif // FORTIFICATION_H

