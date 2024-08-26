#ifndef AMBUSH_H
#define AMBUSH_H

#include "BattleStrategy.h"

#include <iostream>

class Ambush : public BattleStrategy {
    
    public:
        virtual void engage();
        BattleConditions conditions;
};

#endif // AMBUSH_H

