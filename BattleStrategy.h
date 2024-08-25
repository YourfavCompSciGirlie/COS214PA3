#ifndef BATTLESTRATEGY_H
#define BATTLESTRATEGY_H

#include <vector>
#include "LegionUnit.h"

class BattleStrategy {
    
    public:
        virtual ~BattleStrategy() {}
        virtual void engage(std::vector<LegionUnit*> units) = 0;  // Pure virtual method
};

#endif // BATTLESTRATEGY_H
