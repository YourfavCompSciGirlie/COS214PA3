// Class definition for 5. Strategy (Concrete Strategy)

#ifndef FLANKING_H
#define FLANKING_H

#include "BattleStrategy.h"

#include <iostream>

using namespace std;

class Flanking : public BattleStrategy {
    
    public:
        // Added OWN function
        Flanking() {}
        ~Flanking() {}

        void engage(vector<LegionUnit*> units);
};

#endif // FLANKING_H