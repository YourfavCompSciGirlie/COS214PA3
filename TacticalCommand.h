// Class definition for 5. Strategy

#ifndef TACTICALCOMMAND_H
#define TACTICALCOMMAND_H

#include "BattleStrategy.h"

class TacticalCommand {

    private:
        BattleStrategy* strategy;  // Pointer to a BattleStrategy object

    public:
        TacticalCommand(BattleStrategy* initialStrategy);

        // Added OWN function
        // ~TacticalCommand();  // Destructor to clean up strategy
        
        void setStrategy(BattleStrategy* s);
        void executeStrategy();
        void chooseBestStrategy();  // Placeholder for future implementation
};

#endif // TACTICALCOMMAND_H
