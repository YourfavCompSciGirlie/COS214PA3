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
#include "TacticalPlanner.h"
#include "WarArchives.h"

#include "Legion.h"
#include "InfantryLegion.h"
#include "ArtilleryLegion.h"
#include "CavalryLegion.h"

using namespace std;

// Abstract Factory
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



// Strategy
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
    // command.chooseBestStrategy(openFieldUnits);
    // command.executeStrategy(openFieldUnits);

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
    // command.chooseBestStrategy(openFieldUnits);
    // command.executeStrategy(openFieldUnits);

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
    // command.chooseBestStrategy(openFieldUnits);
    // command.executeStrategy(openFieldUnits);

    // Clean up
    delete woodlandFactory;
    delete riverbankFactory;
    // delete openFieldFactory;
    
    for (auto unit : woodlandUnits) delete unit;
    for (auto unit : riverbankUnits) delete unit;
    // for (auto unit : openFieldUnits) delete unit;
}



// Memento
void testMementoPattern() {
    std::cout << "---- Testing Memento Pattern ----" << std::endl;

    // Create different strategies
    BattleStrategy* flanking = new Flanking();
    BattleStrategy* fortification = new Fortification();
    BattleStrategy* ambush = new Ambush();

    // Create a TacticalPlanner
    TacticalPlanner* planner = new TacticalPlanner();

    // Create WarArchives (Caretaker)
    WarArchives* archives = new WarArchives();

    // Create TacticalCommand (Memento Client)
    TacticalCommand* command = new TacticalCommand(flanking);

    // Save initial state
    planner->setStrategy(flanking);
    TacticalMemento* memento1 = planner->createMemento();
    archives->addTacticalMemento(memento1, "Flanking");

    // Change strategy and save new state
    planner->setStrategy(fortification);
    TacticalMemento* memento2 = planner->createMemento();
    archives->addTacticalMemento(memento2, "Fortification");

    // Change strategy again
    planner->setStrategy(ambush);

    // Print current strategy
    std::cout << "Current Strategy: Ambush" << std::endl;

    // Restore the previous state
    planner->restoreMemento(archives->getTacticalMemento("Fortification"));
    command->setStrategy(planner->getStrategy());

    // Print restored strategy
    std::cout << "Restored Strategy: Fortification" << std::endl;
    // command->executeStrategy() //needs a legion

    // Clean up
    // delete flanking;
    // delete fortification;
    // delete ambush;
    // delete planner;
    // delete archives;
    // delete command;
}



// Composite
void testIndividualUnits() {
    std::cout << "---- Testing Individual Units ----" << std::endl;
    
    // Create concrete units
    UnitComponent* infantry = new WoodlandInfantry();
    UnitComponent* cavalry = new RiverbankCavalry();
    UnitComponent* artillery = new OpenFieldArtillery();

    // Test move and attack methods
    infantry->move();
    infantry->attack();

    cavalry->move();
    cavalry->attack();

    artillery->move();
    artillery->attack();

    // Clean up
    delete infantry;
    delete cavalry;
    delete artillery;
}

void testCompositeLegion() {
    std::cout << "\n---- Testing Composite Legion ----" << std::endl;

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
    legion->attack();

    delete legion;
}

void testNestedLegions() {
    std::cout << "\n---- Testing Nested Legions ----" << std::endl;

    // Create individual units
    UnitComponent* infantry1 = new WoodlandInfantry();
    UnitComponent* cavalry1 = new RiverbankCavalry();

    // Create first sub-legion
    Legion* subLegion1 = new Legion();
    subLegion1->add(infantry1);
    subLegion1->add(cavalry1);

    // Create second sub-legion with more units
    UnitComponent* artillery1 = new OpenFieldArtillery();
    UnitComponent* infantry2 = new OpenFieldInfantry();
    Legion* subLegion2 = new ArtilleryLegion(); //change here as well
    subLegion2->add(artillery1);
    subLegion2->add(infantry2);

    // Create main legion and add sub-legions
    Legion* mainLegion = new Legion();
    mainLegion->add(subLegion1);
    mainLegion->add(subLegion2);

    // Execute commands on the main legion
    mainLegion->move();
    mainLegion->attack();

    delete mainLegion;
}

void testRemoveFunctionality() {
    std::cout << "\n---- Testing Remove Functionality ----" << std::endl;

    // Create individual units
    UnitComponent* infantry1 = new WoodlandInfantry();
    UnitComponent* cavalry1 = new RiverbankCavalry();
    UnitComponent* artillery1 = new OpenFieldArtillery();

    // Create a legion and add units
    Legion* legion = new InfantryLegion();
    legion->add(infantry1);
    legion->add(cavalry1);
    legion->add(artillery1);

    // Execute move and fight before removing any units
    legion->move();
    legion->attack();

    // Remove the cavalry unit and test again
    legion->remove(cavalry1);
    std::cout << "\nAfter removing Cavalry:\n";
    legion->move();
    legion->attack();

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

    cout << "===== Memento Design Pattern Testing ==============" << endl;

    testMementoPattern();

    cout << "===== Composite Design Pattern Testing =============" << endl;

    testIndividualUnits();
    testCompositeLegion();
    testNestedLegions();
    testRemoveFunctionality();

    cout << "===== End of All Tests =====" << endl << endl;

    // Summary of All Tests
    std::cout << "=== Summary of All Tests ===\n";
    std::cout << "Abstract Factory Pattern: Tested creation of different military units based on terrain.\n";
    std::cout << "Strategy Pattern: Tested different strategies and their application.\n";
    std::cout << "Memento Pattern: Tested saving and restoring strategies using mementos.\n";
    std::cout << "Composite Pattern: Tested adding and managing units in a composite structure.\n";

    return 0;
}