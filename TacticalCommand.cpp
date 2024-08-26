// Class definition for 5. Strategy

#include "BattleStrategy.h"
#include "TacticalCommand.h"

#include <iostream>

TacticalCommand::TacticalCommand(BattleStrategy* initialStrategy)  {
    if(initialStrategy != NULL) {
        strategy = initialStrategy;
    } else {
        std::cout << "Could not construct tactical command\n";
    }
}


// // Added OWN function - Destructor to delete pointer (TC owns BS)
// TacticalCommand::~TacticalCommand() {
//     delete strategy;  // Clean up the strategy object
// }


void TacticalCommand::setStrategy(BattleStrategy* s) {
    // // Optionally delete old strategy if TacticalCommand owns it
    // delete strategy;
    if(s != NULL) {
         strategy = s;
    } else {
        std::cout << "Could not set strategy\n";
    }
   
}

void TacticalCommand::restoreStrategy(const std::string &label)
{
    TacticalMemento* memento = warArchives.getTacticalMemento(label);  // Retrieve the saved memento
    strategy->restoreFromMemento(memento);  
}

void TacticalCommand::saveStrategy(const std::string &label)
{
    TacticalMemento* memento = strategy->saveToMemento();  // Create a memento from the current strategy
    warArchives.addTacticalMemento(memento, label); 
}

void TacticalCommand::executeStrategy() {
    if (strategy) {
        strategy->execute();
    } else {
        std::cout << "Strategy not executed\n"; 
    }
}



void TacticalCommand::chooseBestStrategy() {
    // Placeholder for future implementation using the Memento pattern
    std::cout << "🔮 **Choosing the Best Strategy**: Analyzing previous results to determine the optimal tactic for the current situation." << std::endl;
    // TODO: Implement the logic to choose the best strategy based on previous results
    
}
