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
#include "TacticalPlanner.h"
#include "WarArchives.h"

#include "Legion.h"
#include "InfantryLegion.h"
#include "ArtilleryLegion.h"
#include "CavalryLegion.h"

using namespace std;

// Abstract Factory
void testFactory(LegionFactory* factory) {
    cout << endl;

    // Create units using the factory
    Infantry* infantry = factory->createInfantry();
    cout << endl;
    Cavalry* cavalry = factory->createCavalry();
    cout << endl;
    Artillery* artillery = factory->createArtillery();
    cout << endl;

    // Test move and attack for Infantry
    cout << "Testing Infantry unit:\n" << endl;
    infantry->move();
    infantry->attack();

    // Test move and attack for Cavalry
    cout << "\nTesting Cavalry unit:\n" << endl;
    cavalry->move();
    cavalry->attack();

    // Test move and attack for Artillery
    cout << "\nTesting Artillery unit:\n" << endl;
    artillery->move();
    artillery->attack();

    // Test deployArtillery specific to terrain challenges
    cout << "\nTesting deployArtillery:\n" << endl;
    factory->deployArtillery();

    cout << endl;

    // Clean up
    delete infantry;
    delete cavalry;
    delete artillery;

    cout << endl;
}



// Strategy
void testStrategy() {
    cout << endl;

    // Create factories for different terrains
    LegionFactory* woodlandFactory = new WoodlandFactory();
    LegionFactory* riverbankFactory = new RiverbankFactory();
    LegionFactory* openFieldFactory = new OpenFieldFactory();

    cout << endl;

    // Create units for each terrain
    std::vector<LegionUnit*> woodlandUnits;
    woodlandUnits.push_back(woodlandFactory->createInfantry());
    woodlandUnits.push_back(woodlandFactory->createCavalry());
    woodlandUnits.push_back(woodlandFactory->createArtillery());

    cout << endl;

    std::vector<LegionUnit*> riverbankUnits;
    riverbankUnits.push_back(riverbankFactory->createInfantry());
    riverbankUnits.push_back(riverbankFactory->createCavalry());
    riverbankUnits.push_back(riverbankFactory->createArtillery());

    cout << endl;

    std::vector<LegionUnit*> openFieldUnits;
    openFieldUnits.push_back(openFieldFactory->createInfantry());
    openFieldUnits.push_back(openFieldFactory->createCavalry());
    openFieldUnits.push_back(openFieldFactory->createArtillery());

    cout << endl;

    // Create tactical command object
    TacticalCommand command;

    cout << endl;

    // Test Flanking strategy
    std::cout << "Testing Flanking Strategy:\n\n";
    command.setStrategy(new Flanking());
    command.executeStrategy(woodlandUnits);

    cout << endl;

    std::cout << "Executing Flanking strategy for Woodland units:\n\n";
    command.chooseBestStrategy(woodlandUnits);
    command.executeStrategy(woodlandUnits);

    cout << endl;
    
    std::cout << "Executing Flanking strategy for Riverbank units:\n\n";
    command.chooseBestStrategy(riverbankUnits);
    command.executeStrategy(riverbankUnits);

    cout << endl;
    
    std::cout << "Executing Flanking strategy for OpenField units:\n\n";
    command.chooseBestStrategy(openFieldUnits);
    command.executeStrategy(openFieldUnits);

    cout << endl;

    // Test Fortification strategy
    std::cout << "Testing Fortification Strategy:\n\n";
    command.setStrategy(new Fortification());
    command.executeStrategy(woodlandUnits);

    cout << endl;

    std::cout << "Executing Fortification strategy for Woodland units:\n\n";
    command.chooseBestStrategy(woodlandUnits);
    command.executeStrategy(woodlandUnits);

    cout << endl;
    
    std::cout << "Executing Fortification strategy for Riverbank units:\n\n";
    command.chooseBestStrategy(riverbankUnits);
    command.executeStrategy(riverbankUnits);

    cout << endl;
    
    std::cout << "Executing Fortification strategy for OpenField units:\n\n";
    command.chooseBestStrategy(openFieldUnits);
    command.executeStrategy(openFieldUnits);

    cout << endl;

    // Test Ambush strategy
    std::cout << "Testing Ambush Strategy:\n\n";
    command.setStrategy(new Ambush());
    command.executeStrategy(woodlandUnits);

    cout << endl;

    std::cout << "Executing Ambush strategy for Woodland units:\n\n";
    command.chooseBestStrategy(woodlandUnits);
    command.executeStrategy(woodlandUnits);

    cout << endl;
    
    std::cout << "Executing Ambush strategy for Riverbank units:\n\n";
    command.chooseBestStrategy(riverbankUnits);
    command.executeStrategy(riverbankUnits);

    cout << endl;
    
    std::cout << "Executing Ambush strategy for OpenField units:\n\n";
    command.chooseBestStrategy(openFieldUnits);
    command.executeStrategy(openFieldUnits);

    cout << endl;

    // Clean up
    delete woodlandFactory;
    delete riverbankFactory;
    delete openFieldFactory;

    cout << endl;
    
    for (auto unit : woodlandUnits) delete unit;
    cout << endl;
    for (auto unit : riverbankUnits) delete unit;
    cout << endl;
    for (auto unit : openFieldUnits) delete unit;
}



// Memento
void testMementoPattern() {
    // Create different strategies
    BattleStrategy* flanking = new Flanking();
    BattleStrategy* fortification = new Fortification();
    BattleStrategy* ambush = new Ambush();

    // Create a TacticalPlanner
    TacticalPlanner* planner = new TacticalPlanner();

    // Create WarArchives (Caretaker)
    WarArchives* archives = new WarArchives();

    // Save initial state (Flanking)
    planner->setStrategy(flanking);
    TacticalMemento* memento1 = planner->createMemento();
    archives->addTacticalMemento(memento1, "Flanking");

    // Save new state (Fortification)
    planner->setStrategy(fortification);
    TacticalMemento* memento2 = planner->createMemento();
    archives->addTacticalMemento(memento2, "Fortification");

    // Change strategy to Ambush
    planner->setStrategy(ambush);
    std::cout << "Current Strategy: Ambush" << std::endl;

    // Restore previous state (Fortification)
    planner->restoreMemento(archives->getTacticalMemento("Fortification"));
    std::cout << "First Strategy Restoration from Memento..." << std::endl;
    TacticalMemento* restoredMemento = archives->getTacticalMemento("Fortification");
    restoredMemento->printStoredStrategy();  // Confirming the restoration

        // Restore previous state (Fortification)
    planner->restoreMemento(archives->getTacticalMemento("Flanking"));
    std::cout << "Second Strategy Restoration from Memento..." << std::endl;
    TacticalMemento* restoredMemento2 = archives->getTacticalMemento("Flanking");
    restoredMemento2->printStoredStrategy();  // Confirming the restoration

    // Clean up dynamically allocated memory
    delete flanking;
    delete fortification;
    delete ambush;
}



// Composite
void testIndividualUnits() {
    std::cout << "---- Testing Individual Units ----\n" << std::endl;
    
    // Create concrete units
    UnitComponent* infantry = new WoodlandInfantry();
    UnitComponent* cavalry = new RiverbankCavalry();
    UnitComponent* artillery = new OpenFieldArtillery();

    cout << endl;

    // Test move and attack methods
    infantry->move();
    infantry->attack();

    cout << endl;

    cavalry->move();
    cavalry->attack();

    cout << endl;

    artillery->move();
    artillery->attack();

    cout << endl;

    // Clean up
    delete infantry;
    delete cavalry;
    delete artillery;
}

void testCompositeLegion() {
    std::cout << "\n---- Testing Composite Legion ----\n" << std::endl;

    // Create individual units
    UnitComponent* infantry1 = new WoodlandInfantry();
    UnitComponent* cavalry1 = new RiverbankCavalry();
    UnitComponent* artillery1 = new OpenFieldArtillery();

    // Create a composite legion
    Legion* legion = new InfantryLegion();

    // Add individual units to the legion, change all to Infantry as that is the group
    legion->add(infantry1);
    legion->add(cavalry1);
    legion->add(artillery1);

    // Execute commands on the composite legion
    legion->move();
    cout << endl;
    legion->attack();
    cout << endl;

    delete legion;

    delete infantry1;
    delete cavalry1;
    delete artillery1;
}

void testNestedLegions() {
    std::cout << "\n---- Testing Nested Legions ----\n" << std::endl;

    // Create individual units
    UnitComponent* infantry1 = new WoodlandInfantry();
    UnitComponent* cavalry1 = new RiverbankCavalry();

    // Create first sub-legion
    Legion* subLegion1 = new Legion();
    subLegion1->add(infantry1);
    subLegion1->add(cavalry1);

    cout << endl;

    // Create second sub-legion with more units
    UnitComponent* artillery1 = new OpenFieldArtillery();
    UnitComponent* infantry2 = new OpenFieldInfantry();

    cout << endl;

    Legion* subLegion2 = new ArtilleryLegion();
    subLegion2->add(artillery1);
    subLegion2->add(infantry2);

    // Create main legion and add sub-legions
    Legion* mainLegion = new Legion();
    mainLegion->add(subLegion1);
    mainLegion->add(subLegion2);

    // Execute commands on the main legion
    mainLegion->move();
    cout << endl;
    mainLegion->attack();
    cout << endl;

    delete mainLegion;
    delete subLegion1;
    delete subLegion2;
    delete infantry1;
    delete cavalry1;
    delete artillery1;
    delete infantry2;
}

void testRemoveFunctionality() {
    std::cout << "\n---- Testing Remove Functionality ----\n" << std::endl;

    // Create individual units
    UnitComponent* infantry1 = new WoodlandInfantry();
    UnitComponent* cavalry1 = new RiverbankCavalry();
    UnitComponent* artillery1 = new OpenFieldArtillery();

    cout << endl;

    // Create a legion and add units
    Legion* legion = new InfantryLegion();
    legion->add(infantry1);
    legion->add(cavalry1);
    legion->add(artillery1);

    // Execute move and fight before removing any units
    legion->move();
    cout << endl;
    legion->attack();
    cout << endl;

    // Remove the cavalry unit and test again
    legion->remove(cavalry1);
    std::cout << "\nAfter removing Cavalry:\n\n";
    legion->move();
    cout << endl;
    legion->attack();

    cout << endl;

    delete legion;
    delete infantry1;
    delete cavalry1;
    delete artillery1;
}




int main() {

    cout << "\n===== Abstract Factory Design Pattern Testing =====\n\n";

    // Test RiverbankFactory
    RiverbankFactory riverbankFactory;
    testFactory(&riverbankFactory);

    // Test WoodlandFactory
    WoodlandFactory woodlandFactory;
    testFactory(&woodlandFactory);

    // Test OpenFieldFactory
    OpenFieldFactory openFieldFactory;
    testFactory(&openFieldFactory);


    cout << "\n===== Strategy Design Pattern Testing =============\n\n" << endl;

    testStrategy();

    cout << "\n===== Memento Design Pattern Testing ==============\n" << endl;

    testMementoPattern();

    cout << "\n===== Composite Design Pattern Testing =============\n" << endl;

    testIndividualUnits();
    testCompositeLegion();
    testNestedLegions();
    testRemoveFunctionality();


    cout << "\n===== End of All Tests =====" << endl;

    // Summary of All Tests
    std::cout << "\n=== Summary of All Tests ===\n";
    std::cout << "Abstract Factory Pattern: Tested creation of different military units based on terrain.\n";
    std::cout << "Strategy Pattern: Tested different strategies and their application.\n";
    std::cout << "Memento Pattern: Tested saving and restoring strategies using mementos.\n";
    std::cout << "Composite Pattern: Tested adding and managing units in a composite structure.\n";

    cout << endl;

    return 0;
}