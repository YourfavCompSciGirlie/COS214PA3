// Class definition for 5. Strategy (Concrete Strategy)

#ifndef AMBUSH_H
#define AMBUSH_H

#include "BattleStrategy.h"

#include <iostream>

using namespace std;

class Ambush : public BattleStrategy {
    
    public:
        // Added OWN functions
        Ambush() {}
        ~Ambush() {}

        void engage(vector<LegionUnit*> units);    
};

#endif // AMBUSH_H

