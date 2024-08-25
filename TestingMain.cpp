// // Still under construction

// #include <iostream>
// #include <vector>

// #include "LegionFactory.h"
// #include "LegionUnit.h"
// #include "Infantry.h"
// #include "Cavalry.h"
// #include "Artillery.h"
// #include "TacticalCommand.h"
// #include "BattleStrategy.h"
// #include "TacticalMemento.h"
// #include "TacticalCommand.h"
// #include "WarArchives.h"


// using namespace std;




// // Testing main function
// int main() {
//     // Abstract Factory Testing
//     std::cout << "=== Abstract Factory Testing ===\n";
//     LegionFactory* factory = new WoodlandFactory();
//     Infantry* infantry = factory->createInfantry();
//     Cavalry* cavalry = factory->createCavalry();
//     Artillery* artillery = factory->createArtillery();

//     infantry->move();
//     infantry->attack();
//     cavalry->move();
//     cavalry->attack();
//     artillery->move();
//     artillery->attack();

//     delete factory;
//     delete infantry;
//     delete cavalry;
//     delete artillery;

//     std::cout << "=== End of Abstract Factory Testing ===\n\n";

//     // Strategy Pattern Testing
//     std::cout << "=== Strategy Pattern Testing ===\n";
//     TacticalCommand command;
//     BattleStrategy* flanking = new Flanking();
//     BattleStrategy* fortification = new Fortification();

//     command.setStrategy(flanking);
//     command.executeStrategy();

//     command.setStrategy(fortification);
//     command.executeStrategy();

//     delete flanking;
//     delete fortification;

//     std::cout << "=== End of Strategy Pattern Testing ===\n\n";

//     // Memento Pattern Testing
//     std::cout << "=== Memento Pattern Testing ===\n";
//     TacticalPlanner planner;
//     WarArchives archives;
    
//     BattleStrategy* ambush = new Ambush();
//     planner.setStrategy(ambush);
//     TacticalMemento* memento = planner.createMemento();
//     archives.addTacticalMemento(memento, "Ambush Strategy");

//     // Restore strategy
//     planner.restoreMemento(archives.getTacticalMemento("Ambush Strategy"));
//     command.setStrategy(planner.createMemento()->getStoredStrategy());
//     command.executeStrategy();

//     delete ambush;

//     std::cout << "=== End of Memento Pattern Testing ===\n\n";

//     // Continue Composite Pattern Testing
//     std::cout << "=== Composite Pattern Testing ===\n";
//     Legion* legionComposite = new Legion();
//     UnitComponent* infantryLeaf = new InfantryLeaf();
//     UnitComponent* cavalryLeaf = new CavalryLeaf();
//     UnitComponent* artilleryLeaf = new ArtilleryLeaf();

//     legionComposite->add(infantryLeaf);
//     legionComposite->add(cavalryLeaf);
//     legionComposite->add(artilleryLeaf);

//     legionComposite->move();
//     legionComposite->fight();

//     delete legionComposite;
//     delete infantryLeaf;
//     delete cavalryLeaf;
//     delete artilleryLeaf;

//     std::cout << "=== End of Composite Pattern Testing ===\n\n";

//     // Summary of All Tests
//     std::cout << "=== Summary of All Tests ===\n";
//     std::cout << "Abstract Factory Pattern: Tested creation of different military units based on terrain.\n";
//     std::cout << "Strategy Pattern: Tested different strategies and their application.\n";
//     std::cout << "Memento Pattern: Tested saving and restoring strategies using mementos.\n";
//     std::cout << "Composite Pattern: Tested adding and managing units in a composite structure.\n";

//     std::cout << "=== End of All Tests ===\n";

//     return 0;
// }