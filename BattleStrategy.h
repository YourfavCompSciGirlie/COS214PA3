#ifndef BATTLESTRATEGY_H
#define BATTLESTRATEGY_H

#include <iostream>
#include <string>
#include <vector>
#include "TacticalMemento.h"


class BattleStrategy {
    
    public:
        virtual ~BattleStrategy() {}
        virtual void execute() = 0;  // Pure virtual function to execute the strategy
        virtual TacticalMemento* saveToMemento() = 0;  // Save current state to memento
        virtual void restoreFromMemento(TacticalMemento* memento) = 0;  // Restore state from memento
        struct BattleConditions {
            std::string terrain;
            std::string weather;
            int advantage;
        };
    
};

#endif // BATTLESTRATEGY_H
