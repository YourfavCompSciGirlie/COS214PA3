// Class definition for 5. Strategy

#include "BattleStrategy.h"
#include "TacticalCommand.h"

#include "Flanking.h"
#include "Fortification.h"
#include "Ambush.h"

#include <iostream>

TacticalCommand::TacticalCommand(BattleStrategy* initialStrategy) : strategy(initialStrategy) {}


// Added OWN function - Destructor to delete pointer (TC owns BS)
TacticalCommand::~TacticalCommand() {
    delete strategy;  // Clean up the strategy object
}


void TacticalCommand::setStrategy(BattleStrategy* s) {
    // Optionally delete old strategy if TacticalCommand owns it
    if (strategy) {
        delete strategy; // Clean up the old strategy
    }
    strategy = s;
}



void TacticalCommand::executeStrategy(std::vector<LegionUnit*> units) {
    if (strategy) {
        strategy->engage(units);
    } else {
        std::cout << "No strategy set!" << std::endl;
    }
}



void TacticalCommand::chooseBestStrategy(std::vector<LegionUnit*> units) {
    // Placeholder for future implementation using the Memento pattern
    std::cout << "🔮 **Choosing the Best Strategy**: Analyzing previous results to determine the optimal tactic for the current situation." << std::endl;

    if (units.empty()) {
        std::cout << "No units to choose strategy for!" << std::endl;
        return;
    }

    // Compute average attributes of the units
    double avgMobility = 0;
    double avgAttackStrength = 0;
    double avgDefense = 0;
    double avgTerrainAdaptability = 0;

    int numUnits = units.size();

    for (auto unit : units) {
        avgMobility += unit->getMobility();
        avgAttackStrength += unit->getAttackStrength();
        avgDefense += unit->getDefense();
        avgTerrainAdaptability += unit->getTerrainAdaptability();
    }

    avgMobility /= numUnits;
    avgAttackStrength /= numUnits;
    avgDefense /= numUnits;
    avgTerrainAdaptability /= numUnits;

    // Choose strategy based on average attributes
    if (avgMobility > 7 && avgAttackStrength > 6) {
        setStrategy(new Flanking());
    } else if (avgDefense > 7 && avgTerrainAdaptability > 6) {
        setStrategy(new Fortification());
    } else if (avgTerrainAdaptability > 7 && avgAttackStrength > 5) {
        setStrategy(new Ambush());
    } else {
        std::cout << "No optimal strategy found, defaulting to Fortification." << std::endl;
        setStrategy(new Fortification());
    }
}