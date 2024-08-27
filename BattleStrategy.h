#ifndef BATTLESTRATEGY_H
#define BATTLESTRATEGY_H

#include <vector>
#include "LegionUnit.h"

#include <iostream>
#include <string>
#include <vector>
#include "TacticalMemento.h"
using namespace std;

class TacticalMemento;

class BattleStrategy {
    private:
        //what is the state
        TacticalMemento* memento;

        
    
    public:
        std::string name;
        virtual ~BattleStrategy() {}
        virtual void engage(std::vector<LegionUnit*> units) = 0;  // Pure virtual function to execute the strategy
        TacticalMemento* saveToMemento();  // Save current state to memento
        void restoreFromMemento(TacticalMemento* memento);  // Restore state from memento
    
};

#endif // BATTLESTRATEGY_H
