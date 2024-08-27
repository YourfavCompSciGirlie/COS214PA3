// Class definition for 5. Strategy (Concrete Strategy)

#ifndef FLANKING_H
#define FLANKING_H

#include "BattleStrategy.h"

#include <iostream>

using namespace std;

class Flanking : public BattleStrategy {
    
    public:
       Flanking() { 
            name = "Flanking";  // Set the name in the constructor
        }
        void engage(std::vector<LegionUnit*> units);
};

#endif // FLANKING_H