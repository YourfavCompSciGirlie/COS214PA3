// Class definition for 5. Strategy

#ifndef TACTICALCOMMAND_H
#define TACTICALCOMMAND_H

#include "BattleStrategy.h"
#include "TacticalMemento.h"
#include "WarArchives.h"

class TacticalCommand { // context for strategy and client for memento

    private:
        BattleStrategy* strategy;  // Pointer to a BattleStrategy object
        WarArchives warArchives;  

    public:
        TacticalCommand(BattleStrategy* initialStrategy);

        // Added OWN function
        // ~TacticalCommand();  // Destructor to clean up strategy
        
        void setStrategy(BattleStrategy* s);
        void restoreStrategy(const std::string& label);
        void saveStrategy(const std::string& label);
        void executeStrategy();
        void chooseBestStrategy();  // Placeholder for future implementation
};

#endif // TACTICALCOMMAND_H
