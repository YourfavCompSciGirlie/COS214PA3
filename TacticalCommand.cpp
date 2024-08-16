// Class definition for 5. Strategy

#include "BattleStrategy.h"
#include "TacticalCommand.h"

#include <iostream>

TacticalCommand::TacticalCommand(BattleStrategy* initialStrategy) : strategy(initialStrategy) {}


// // Added OWN function - Destructor to delete pointer (TC owns BS)
// TacticalCommand::~TacticalCommand() {
//     delete strategy;  // Clean up the strategy object
// }


void TacticalCommand::setStrategy(BattleStrategy* s) {
    // // Optionally delete old strategy if TacticalCommand owns it
    // delete strategy;
    strategy = s;
}



void TacticalCommand::executeStrategy() {
    if (strategy) {
        strategy->engage();
    }
}



void TacticalCommand::chooseBestStrategy() {
    // Placeholder for future implementation using the Memento pattern
    std::cout << "🔮 **Choosing the Best Strategy**: Analyzing previous results to determine the optimal tactic for the current situation." << std::endl;
}
