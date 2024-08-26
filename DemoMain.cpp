#include "LegionFactory.h"
#include "WoodlandFactory.h"
#include "RiverbankFactory.h"
#include "OpenFieldFactory.h"
#include "TacticalCommand.h"
#include "BattleStrategy.h"
#include "WarArchives.h"
#include "TacticalMemento.h"
#include "Flanking.h"
#include "Ambush.h"
#include "Fortification.h"
#include "UnitComponent.h"
#include "Legion.h"
#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"
#include "InfantryLegion.h"

#include <iostream>
using namespace std;


void testAbstractFactory() {
    LegionFactory* woodlandFactory = new WoodlandFactory();
    LegionFactory* riverbankFactory = new RiverbankFactory();
    LegionFactory* openFieldFactory = new OpenFieldFactory();

    Infantry* woodlandInfantry = woodlandFactory->createInfantry();
    Cavalry* woodlandCavalry = woodlandFactory->createCavalry();
    Artillery* woodlandArtillery = woodlandFactory->createArtillery();

    Infantry* riverbankInfantry = riverbankFactory->createInfantry();
    Cavalry* riverbankCavalry = riverbankFactory->createCavalry();
    Artillery* riverbankArtillery = riverbankFactory->createArtillery();

    Infantry* openFieldInfantry = openFieldFactory->createInfantry();
    Cavalry* openFieldCavalry = openFieldFactory->createCavalry();
    Artillery* openFieldArtillery = openFieldFactory->createArtillery();

    // Test deployment or other operations
    woodlandFactory->deployArtillery();
    riverbankFactory->deployArtillery();
    openFieldFactory->deployArtillery();

    // Clean up
    delete woodlandInfantry;
    delete woodlandCavalry;
    delete woodlandArtillery;
    delete riverbankInfantry;
    delete riverbankCavalry;
    delete riverbankArtillery;
    delete openFieldInfantry;
    delete openFieldCavalry;
    delete openFieldArtillery;
    delete woodlandFactory;
    delete riverbankFactory;
    delete openFieldFactory;
}

void testMementoPattern() {
    // Example strategy setup
// Add units to vector
    LegionFactory* woodlandFactory = new WoodlandFactory();

Infantry* infantry1 = woodlandFactory->createInfantry();
Infantry* infantry2 = woodlandFactory->createInfantry();
Infantry* infantry3 = woodlandFactory->createInfantry();


    std::vector<LegionUnit*> units = {infantry1, infantry2, infantry3};

    // Step 2: Initialize Tactical Command with a starting strategy
    TacticalCommand* command = new TacticalCommand(new Ambush());
    std::cout << "Initial strategy: Ambush" << std::endl;

    // Step 3: Execute the initial strategy
    command->executeStrategy(units);

    // Step 4: Save the current strategy to a memento
    std::cout << "Saving initial strategy..." << std::endl;
    command->saveStrategy("InitialStrategy");

    // Step 5: Change to a different strategy
    std::cout << "Changing to a new strategy (Flanking)..." << std::endl;
    command->setStrategy(new Flanking());
    command->executeStrategy(units);

    // Step 6: Save this new strategy to a memento
    std::cout << "Saving new strategy..." << std::endl;
    command->saveStrategy("FlankingStrategy");

    // Step 7: Restore the original strategy from memento
    std::cout << "Restoring original strategy..." << std::endl;
    command->restoreStrategy("InitialStrategy");
    command->executeStrategy(units);

    // Step 8: Test the function that chooses the best strategy based on the units' attributes
    std::cout << "Choosing the best strategy based on unit attributes..." << std::endl;
    command->chooseBestStrategy(units);

    // Step 9: Test restoring a successful strategy from the War Archives (caretaker)
    std::cout << "Restoring saved FlankingStrategy from archives..." << std::endl;
    command->restoreStrategy("FlankingStrategy");
    command->executeStrategy(units);

    // Cleanup
    delete infantry1;
   delete infantry1;
   delete infantry1;
    delete command;
}

void testCompositePattern() {
    // Create individual units (leaves)
   LegionFactory* woodlandFactory = new WoodlandFactory();

   Infantry* infantry1 = woodlandFactory->createInfantry();
   Infantry* infantry2 = woodlandFactory->createInfantry();
   Infantry* infantry3 = woodlandFactory->createInfantry();


    // Create a legion (composite)
   Legion* infantryLegion = new InfantryLegion();

    // Add individual units to the legion
    infantryLegion->add(infantry1);
    infantryLegion->add(infantry2);
    infantryLegion->add(infantry3);

    // Create a sub-legion and add it to the infantryLegion (demonstrating a composite of composites)
    
    InfantryLegion* subLegion = new InfantryLegion();
    subLegion->add(infantry2);
    infantryLegion->add(subLegion);

    // Perform actions on the legion and all its components
    std::cout << "\nExecuting Composite Pattern Test:\n" << std::endl;
    
    std::cout << "**Moving the entire Infantry Legion (including sublegions):**" << std::endl;
    infantryLegion->move();  // Should move all units in the legion and sublegion

    std::cout << "\n**Attacking with the entire Infantry Legion (including sublegions):**" << std::endl;
    infantryLegion->attack();  // Should execute attack for all units in the legion and sublegion

    // Clean up
    delete infantry1;
     delete infantry2;
      delete infantry3;
    delete subLegion;
    delete infantryLegion;
}

int main() {

   testCompositePattern()


   return 0;
  
}
