#ifndef AMBUSH_H
#define AMBUSH_H

#include "BattleStrategy.h"

#include <iostream>

class Ambush : public BattleStrategy {
    
    public:
        virtual void engage();
};

#endif // AMBUSH_H

