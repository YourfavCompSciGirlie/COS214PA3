#ifndef FLANKING_H
#define FLANKING_H

#include "BattleStrategy.h"

#include <iostream>

class Flanking : public BattleStrategy {
    
    public:
        virtual void engage();
        BattleConditions conditions;
};

#endif // FLANKING_H

