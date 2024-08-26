#ifndef AMBUSH_H
#define AMBUSH_H

#include "BattleStrategy.h"

#include <iostream>

class Ambush : public BattleStrategy {
    
    public:
        void engage(std::vector<LegionUnit*> units);

        // Added OWN function
        ~Ambush() {}
};

#endif // AMBUSH_H

