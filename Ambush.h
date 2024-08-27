// Class definition for 5. Strategy (Concrete Strategy)

#ifndef AMBUSH_H
#define AMBUSH_H

#include "BattleStrategy.h"

#include <iostream>

using namespace std;

class Ambush : public BattleStrategy {
    
    public:
       Ambush() { 
            name = "Ambush";  // Set the name in the constructor
        }
        void engage(std::vector<LegionUnit*> units);
};

#endif // AMBUSH_H

