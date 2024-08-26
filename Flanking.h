#ifndef FLANKING_H
#define FLANKING_H

#include "BattleStrategy.h"

#include <iostream>

class Flanking : public BattleStrategy {
    
    public:
        void engage(std::vector<LegionUnit*> units);
};

#endif // FLANKING_H

