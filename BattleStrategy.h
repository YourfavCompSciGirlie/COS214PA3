// Class definition for 5. Strategy (Abstract Strategy)

#ifndef BATTLESTRATEGY_H
#define BATTLESTRATEGY_H

#include "LegionUnit.h"
#include "TacticalMemento.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class TacticalMemento;

class BattleStrategy {
    
    private:
        TacticalMemento* memento;

    public:
        // Added OWN functions
        BattleStrategy() {}
        virtual ~BattleStrategy() {}

        virtual void engage(vector<LegionUnit*> units) = 0;  // Pure virtual function to execute the strategy
        TacticalMemento* saveToMemento();  // Save current state to memento
        void restoreFromMemento(TacticalMemento* memento);  // Restore state from memento
};

#endif // BATTLESTRATEGY_H
