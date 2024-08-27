// Class implementation for 5. Strategy (Memento Client)

#include "BattleStrategy.h"
#include "TacticalCommand.h"

#include "Flanking.h"
#include "Fortification.h"
#include "Ambush.h"

#include <iostream>

using namespace std;


TacticalCommand::TacticalCommand(BattleStrategy* initialStrategy) {
    if (initialStrategy != NULL) {
        strategy = initialStrategy;
    } else {
        cout << "Could not construct tactical command\n";
    }
}



TacticalCommand::TacticalCommand() {
    cout << "Tactical command up and running!\n";
}



// Added OWN function - Destructor to delete pointer (TC owns BS)
TacticalCommand::~TacticalCommand() {
    if (strategy) {
        delete strategy;
    }  // Clean up the strategy object
}



void TacticalCommand::setStrategy(BattleStrategy* s) {
    // Optionally delete old strategy if TacticalCommand owns it
    // if (strategy) {
    //     delete strategy; // Clean up the old strategy
    // }
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
    cout << "🔮 -- Choosing the Best Strategy: Analyzing previous results to determine the optimal tactic for the current situation.\n" << endl;

    if (units.empty()) {
        cout << "No units to choose strategy for!" << endl;
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
        cout << "No optimal strategy found, defaulting to Fortification." << endl;
        setStrategy(new Fortification());
    }
}