// Class definition for 5. Strategy

#ifndef TACTICALCOMMAND_H
#define TACTICALCOMMAND_H

#include "BattleStrategy.h"
#include "TacticalMemento.h"
#include "WarArchives.h"

#include <vector>

class TacticalCommand { // context for strategy and client for memento

    private:
        BattleStrategy* strategy;  // Pointer to a BattleStrategy object
        WarArchives warArchives;  

    public:
        TacticalCommand(BattleStrategy* initialStrategy);

        // Added OWN function
        TacticalCommand() {}
        ~TacticalCommand();  // Destructor to clean up strategy
        
        void setStrategy(BattleStrategy* s);
        void executeStrategy(std::vector<LegionUnit*> units);
        void chooseBestStrategy(std::vector<LegionUnit*> units);
};

#endif // TACTICALCOMMAND_H
