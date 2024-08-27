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



TacticalCommand::TacticalCommand(): planner(new TacticalPlanner())
{
    std::cout << "Tactical command up and running!\n";
    
}



// Added OWN function - Destructor to delete pointer (TC owns BS)
TacticalCommand::~TacticalCommand() {
    delete strategy;  // Clean up the strategy object
    delete planner;
}



void TacticalCommand::setStrategy(BattleStrategy* s) {
    // Optionally delete old strategy if TacticalCommand owns it

    // if (strategy) {
    //     delete strategy; // Clean up the old strategy
    // }



    this->strategy = s;

 if (this->planner) {
        this->planner->setStrategy(s);

        // Create the memento
        TacticalMemento* memento = this->planner->createMemento();
        if (memento) {  // Check if memento is valid
            this->warArchives.addTacticalMemento(memento, s->name);
        } else {
            std::cout << "Failed to create a valid TacticalMemento!" << std::endl;
        }
    } else {
        std::cout << "Planner is null!" << std::endl;
    }    
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
    if (avgMobility > 7 && avgAttackStrength > 6 && this->warArchives.getTacticalMemento("Flanking") != NULL) {
        TacticalMemento* m = this->warArchives.getTacticalMemento("Flanking");
        setStrategy(m->getStrategy());
    } else if (avgDefense > 7 && avgTerrainAdaptability > 6 && this->warArchives.getTacticalMemento("Fortification") != NULL) {
        TacticalMemento* m = this->warArchives.getTacticalMemento("Fortification");
        
        setStrategy(m->getStrategy());
    } else if (avgTerrainAdaptability > 7 && avgAttackStrength > 5 && this->warArchives.getTacticalMemento("Ambush") != NULL) {
        TacticalMemento* m = this->warArchives.getTacticalMemento("Ambush");
  
        setStrategy(m->getStrategy());
    } else {
        cout << "No optimal strategy found, defaulting to Fortification." << endl;
        setStrategy(new Fortification());
    }
}