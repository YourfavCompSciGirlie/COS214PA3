// // Still under construction

#include <iostream>
#include <vector>

#include "LegionFactory.h"

#include "RiverbankFactory.h"
#include "WoodlandFactory.h"
#include "OpenFieldFactory.h"
#include "LegionUnit.h"

#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"

#include "TacticalCommand.h"
#include "Flanking.h"
#include "Fortification.h"
#include "Ambush.h"

#include "BattleStrategy.h"
#include "TacticalMemento.h"
#include "WarArchives.h"

#include "Legion.h"


using namespace std;


void testFactory(LegionFactory* factory) {
    cout << "Testing factory: " << typeid(*factory).name() << endl;

    // Create units using the factory
    Infantry* infantry = factory->createInfantry();
    Cavalry* cavalry = factory->createCavalry();
    Artillery* artillery = factory->createArtillery();

    // Test move and attack for Infantry
    cout << "Testing Infantry unit:" << endl;
    infantry->move();
    infantry->attack();

    // Test move and attack for Cavalry
    cout << "\nTesting Cavalry unit:" << endl;
    cavalry->move();
    cavalry->attack();

    // Test move and attack for Artillery
    cout << "\nTesting Artillery unit:" << endl;
    artillery->move();
    artillery->attack();

    // Test deployArtillery specific to terrain challenges
    cout << "\nTesting deployArtillery:" << endl;
    factory->deployArtillery();

    // Clean up
    delete infantry;
    delete cavalry;
    delete artillery;

    cout << "Finished testing factory: " << typeid(*factory).name() << "\n" << endl;
}


void testStrategy() {
    // Create factories for different terrains
    LegionFactory* woodlandFactory = new WoodlandFactory();
    LegionFactory* riverbankFactory = new RiverbankFactory();
    LegionFactory* openFieldFactory = new OpenFieldFactory();

    // Create units for each terrain
    std::vector<LegionUnit*> woodlandUnits;
    woodlandUnits.push_back(woodlandFactory->createInfantry());
    woodlandUnits.push_back(woodlandFactory->createCavalry());
    woodlandUnits.push_back(woodlandFactory->createArtillery());

    std::vector<LegionUnit*> riverbankUnits;
    riverbankUnits.push_back(riverbankFactory->createInfantry());
    riverbankUnits.push_back(riverbankFactory->createCavalry());
    riverbankUnits.push_back(riverbankFactory->createArtillery());

    std::vector<LegionUnit*> openFieldUnits;
    openFieldUnits.push_back(openFieldFactory->createInfantry());
    openFieldUnits.push_back(openFieldFactory->createCavalry());
    openFieldUnits.push_back(openFieldFactory->createArtillery());

    // Create tactical command object
    TacticalCommand command;

    // Test Flanking strategy
    std::cout << "Testing Flanking Strategy:\n";
    command.setStrategy(new Flanking());
    command.executeStrategy(woodlandUnits);

    std::cout << "Executing Flanking strategy for Woodland units:\n";
    command.chooseBestStrategy(woodlandUnits);
    command.executeStrategy(woodlandUnits);
    
    std::cout << "Executing Flanking strategy for Riverbank units:\n";
    command.chooseBestStrategy(riverbankUnits);
    command.executeStrategy(riverbankUnits);
    
    std::cout << "Executing Flanking strategy for OpenField units:\n";
    command.chooseBestStrategy(openFieldUnits);
    command.executeStrategy(openFieldUnits);

    // Test Fortification strategy
    std::cout << "Testing Fortification Strategy:\n";
    command.setStrategy(new Fortification());
    command.executeStrategy(woodlandUnits);

    std::cout << "Executing Fortification strategy for Woodland units:\n";
    command.chooseBestStrategy(woodlandUnits);
    command.executeStrategy(woodlandUnits);
    
    std::cout << "Executing Fortification strategy for Riverbank units:\n";
    command.chooseBestStrategy(riverbankUnits);
    command.executeStrategy(riverbankUnits);
    
    std::cout << "Executing Fortification strategy for OpenField units:\n";
    command.chooseBestStrategy(openFieldUnits);
    command.executeStrategy(openFieldUnits);

    // Test Ambush strategy
    std::cout << "Testing Ambush Strategy:\n";
    command.setStrategy(new Ambush());
    command.executeStrategy(woodlandUnits);

    std::cout << "Executing Ambush strategy for Woodland units:\n";
    command.chooseBestStrategy(woodlandUnits);
    command.executeStrategy(woodlandUnits);
    
    std::cout << "Executing Ambush strategy for Riverbank units:\n";
    command.chooseBestStrategy(riverbankUnits);
    command.executeStrategy(riverbankUnits);
    
    std::cout << "Executing Ambush strategy for OpenField units:\n";
    command.chooseBestStrategy(openFieldUnits);
    command.executeStrategy(openFieldUnits);

    // Clean up
    delete woodlandFactory;
    delete riverbankFactory;
    delete openFieldFactory;
    
    for (auto unit : woodlandUnits) delete unit;
    for (auto unit : riverbankUnits) delete unit;
    for (auto unit : openFieldUnits) delete unit;
}


void testIndividualUnits() {
    std::cout << "---- Testing Individual Units ----" << std::endl;
    
    Infantry infantry;
    Cavalry cavalry;
    Artillery artillery;

    infantry.move();
    infantry.fight();

    cavalry.move();
    cavalry.fight();

    artillery.move();
    artillery.fight();
}

void testCompositeLegion() {
    std::cout << "\n---- Testing Composite Legion ----" << std::endl;

    // Create individual units
    UnitComponent* infantry1 = new Infantry();
    UnitComponent* cavalry1 = new Cavalry();
    UnitComponent* artillery1 = new Artillery();

    // Create a composite legion
    Legion* legion = new Legion();

    // Add individual units to the legion
    legion->add(infantry1);
    legion->add(cavalry1);
    legion->add(artillery1);

    // Execute commands on the composite legion
    legion->move();
    legion->fight();

    delete legion;
}

void testNestedLegions() {
    std::cout << "\n---- Testing Nested Legions ----" << std::endl;

    // Create individual units
    UnitComponent* infantry1 = new Infantry();
    UnitComponent* cavalry1 = new Cavalry();

    // Create first sub-legion
    Legion* subLegion1 = new Legion();
    subLegion1->add(infantry1);
    subLegion1->add(cavalry1);

    // Create second sub-legion with more units
    UnitComponent* artillery1 = new Artillery();
    UnitComponent* infantry2 = new Infantry();
    Legion* subLegion2 = new Legion();
    subLegion2->add(artillery1);
    subLegion2->add(infantry2);

    // Create main legion and add sub-legions
    Legion* mainLegion = new Legion();
    mainLegion->add(subLegion1);
    mainLegion->add(subLegion2);

    // Execute commands on the main legion
    mainLegion->move();
    mainLegion->fight();

    delete mainLegion;
}

void testRemoveFunctionality() {
    std::cout << "\n---- Testing Remove Functionality ----" << std::endl;

    // Create individual units
    UnitComponent* infantry1 = new Infantry();
    UnitComponent* cavalry1 = new Cavalry();
    UnitComponent* artillery1 = new Artillery();

    // Create a legion and add units
    Legion* legion = new Legion();
    legion->add(infantry1);
    legion->add(cavalry1);
    legion->add(artillery1);

    // Execute move and fight before removing any units
    legion->move();
    legion->fight();

    // Remove the cavalry unit and test again
    legion->remove(cavalry1);
    std::cout << "\nAfter removing Cavalry:\n";
    legion->move();
    legion->fight();

    delete legion;
}



int main() {

    cout << "===== Abstract Factory Design Pattern Testing =====" << endl;

    // Test RiverbankFactory
    RiverbankFactory riverbankFactory;
    testFactory(&riverbankFactory);

    // Test WoodlandFactory
    WoodlandFactory woodlandFactory;
    testFactory(&woodlandFactory);

    // Test OpenFieldFactory
    OpenFieldFactory openFieldFactory;
    testFactory(&openFieldFactory);


    cout << "===== Strategy Design Pattern Testing =============" << endl;

    testStrategy();

    cout << "===== Composite Design Pattern Testing =============" << endl;

    testIndividualUnits();
    testCompositeLegion();
    testNestedLegions();
    testRemoveFunctionality();

    cout << "===== End of All Tests =====" << endl;




    return 0;
}


// // Testing main function
// int main() {


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