// Class definition for 5. Strategy (Memento Client)

#ifndef TACTICALCOMMAND_H
#define TACTICALCOMMAND_H

#include "BattleStrategy.h"
#include "TacticalMemento.h"
#include "WarArchives.h"
#include "TacticalPlanner.h"

#include <vector>

using namespace std;

class TacticalCommand { // Context for Strategy and Client for Memento

    private:
        BattleStrategy* strategy;  // Pointer to a BattleStrategy object
        WarArchives warArchives; 

    public:
        TacticalCommand(BattleStrategy* initialStrategy);
        TacticalPlanner* planner;
    
        // Added OWN function
        TacticalCommand();
        ~TacticalCommand();  // Destructor to clean up strategy
        
        void setStrategy(BattleStrategy* s);
        void executeStrategy(std::vector<LegionUnit*> units);
        void chooseBestStrategy(std::vector<LegionUnit*> units);
};

#endif // TACTICALCOMMAND_H
