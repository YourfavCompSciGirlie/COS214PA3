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
#include "ArtilleryLegion.h"
#include "CavalryLegion.h"

#include <iostream>
using namespace std;

#include <thread>
#include <chrono>

void printPattern(const std::string &pattern, const std::string &color) {
    cout << color << pattern << "\033[0m" << endl;
}

void typeEffect(const std::string& text, int delay = 50) {
    for (char c : text) {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(delay));
    }
    std::cout << std::endl;
}



void testAbstract() {
const std::string red = "\033[31m";
    const std::string green = "\033[32m";
    const std::string blue = "\033[34m";
    const std::string yellow = "\033[33m";
    const std::string reset = "\033[0m";
    const std::string pattern = "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ";


   std::string heading = "Abstract Factory Design Pattern";
    std::string separator = std::string(30, '=');
    cout << endl;
cout << endl;
printPattern(pattern, green);
    typeEffect(separator);
    typeEffect(heading + std::string(40- heading.length(), ' '));
    typeEffect(separator);
printPattern(pattern, green);
cout << endl;
    // Create factories for different terrains
    printPattern("Creating Legion Factories...", blue);
    LegionFactory* woodlandFactory = new WoodlandFactory();
    LegionFactory* riverbankFactory = new RiverbankFactory();
    LegionFactory* openFieldFactory = new OpenFieldFactory();
    std::cout << blue << "Legion factories created for Woodland, Riverbank, and OpenField terrains." << reset << std::endl;
 cout << endl;
    
    // Create units for each terrain
    std::cout << blue << "Creating units for each terrain..." << reset << std::endl;
    Infantry* woodlandInfantry = woodlandFactory->createInfantry();
    Cavalry* woodlandCavalry = woodlandFactory->createCavalry();
    Artillery* woodlandArtillery = woodlandFactory->createArtillery();
 cout << endl;
    
    Infantry* riverbankInfantry = riverbankFactory->createInfantry();
    Cavalry* riverbankCavalry = riverbankFactory->createCavalry();
    Artillery* riverbankArtillery = riverbankFactory->createArtillery();
 cout << endl;
   
    Infantry* openFieldInfantry = openFieldFactory->createInfantry();
    Cavalry* openFieldCavalry = openFieldFactory->createCavalry();
    Artillery* openFieldArtillery = openFieldFactory->createArtillery();

cout << endl;
    // Deploy Artillery for each terrain
    printPattern(pattern, yellow);
    std::cout << yellow << "Deploying artillery for Woodland terrain..." << reset << std::endl;
    woodlandFactory->deployArtillery();
    std::cout << yellow << "Woodland artillery deployed successfully!" << reset << std::endl;

    cout << endl;

    std::cout << yellow << "Deploying artillery for Riverbank terrain..." << reset << std::endl;
    riverbankFactory->deployArtillery();
    std::cout << yellow << "Riverbank artillery deployed successfully!" << reset << std::endl;

    cout << endl;

    std::cout << yellow << "Deploying artillery for OpenField terrain..." << reset << std::endl;
    openFieldFactory->deployArtillery();
    std::cout << yellow << "OpenField artillery deployed successfully!" << reset << std::endl;

cout << endl;
    // Clean up
    printPattern(pattern, red);
    std::cout << red << "Cleaning up units and factories..." << reset << std::endl;
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

    std::cout << green << "Cleanup completed. All resources have been successfully deleted." << reset << std::endl;}

void testMemento() {
    // Example strategy setup
// Add units to vector
  const std::string red = "\033[31m";
    const std::string green = "\033[32m";
    const std::string blue = "\033[34m";
    const std::string yellow = "\033[33m";
    const std::string reset = "\033[0m";
    const std::string pattern = "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ";

    LegionFactory* woodlandFactory = new WoodlandFactory();

   std::string heading = "Memento Design Pattern";
    std::string separator = std::string(30, '=');
    cout << endl;
cout << endl;
printPattern(pattern, green);
    typeEffect(separator);
    typeEffect(heading + std::string(30- heading.length(), ' '));
    typeEffect(separator);
printPattern(pattern, green);
cout << endl;

    Infantry* infantry1 = woodlandFactory->createInfantry();
    Infantry* infantry2 = woodlandFactory->createInfantry();
    Infantry* infantry3 = woodlandFactory->createInfantry();

    std::vector<LegionUnit*> units = {infantry1, infantry2, infantry3};

    TacticalCommand* command = new TacticalCommand(new Ambush());

cout << endl;
    // Initial Strategy
    printPattern(pattern, blue);
    std::cout << blue << "Ambush strategy deployed. Units are taking cover and preparing for a surprise attack!" << reset << std::endl;
    command->executeStrategy(units);
    std::cout << green << "The ambush was successful! Enemy forces are caught off guard." << reset << std::endl;
    
    cout << endl;
    // Save Initial Strategy
    printPattern(pattern, yellow);
    std::cout << yellow << "Strategy 'Ambush' is saved for future reference." << reset << std::endl;

    cout << endl;

    // Change Strategy
    printPattern(pattern, green);
    std::cout << green << "Switching to Flanking strategy. Units are moving to surround the enemy from all sides!" << reset << std::endl;
    command->setStrategy(new Flanking());
    command->executeStrategy(units);
    std::cout << blue << "Flanking strategy executed. Enemy is now surrounded and facing increased pressure!" << reset << std::endl;

    cout << endl;

    // Save New Strategy
    printPattern(pattern, yellow);
    std::cout << yellow << "New strategy 'Flanking' has been saved. Ready for future battles." << reset << std::endl;

    // Restore Original Strategy
    printPattern(pattern, red);
    std::cout << red << "Restoring to the original strategy 'Ambush'. Units are re-positioning for a stealth attack." << reset << std::endl;
    command->executeStrategy(units);
    std::cout << green << "Restoration complete. The ambush is back in action, catching the enemy by surprise once again!" << reset << std::endl;

    cout << endl;

    // Choose Best Strategy
    printPattern("Choosing the best strategy based on unit attributes...", blue);
    std::cout << blue << "Evaluating unit attributes to choose the most effective strategy for the current battle conditions." << reset << std::endl;
    command->chooseBestStrategy(units);

 cout << endl;
    // Restore Saved Strategy
    printPattern("Restoring saved FlankingStrategy from archives...", green);
    std::cout << green << "Restoring saved strategy 'Flanking' from archives. Preparing for an effective offensive!" << reset << std::endl;
    command->executeStrategy(units);
    std::cout << blue << "The saved Flanking strategy is back in play. Units are executing a well-coordinated assault!" << reset << std::endl;

    // Clean up
    delete woodlandFactory;
    for (auto unit : units) delete unit;
    delete command;
}

void testComposite() {
const std::string red = "\033[31m";
    const std::string green = "\033[32m";
    const std::string blue = "\033[34m";
    const std::string yellow = "\033[33m";
    const std::string reset = "\033[0m";
    const std::string pattern = "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ";


    // Create individual units (leaves)
       std::string heading = "Composite Design Pattern";
    std::string separator = std::string(30, '=');
    cout << endl;
cout << endl;
printPattern(pattern, green);
    typeEffect(separator);
    typeEffect(heading + std::string(30- heading.length(), ' '));
    typeEffect(separator);
printPattern(pattern, green);
cout << endl;

    LegionFactory* woodlandFactory = new WoodlandFactory();


    Infantry* infantry1 = woodlandFactory->createInfantry();
    Infantry* infantry2 = woodlandFactory->createInfantry();
    Infantry* infantry3 = woodlandFactory->createInfantry();

cout << endl;
    std::cout << blue << "Three Infantry units created." << reset << std::endl;

    // Create a legion (composite)
    printPattern(pattern, green);
    Legion* infantryLegion = new InfantryLegion();
    std::cout << green << "Infantry Legion created to hold units and sub-legions." << reset << std::endl;

    // Add individual units to the legion
    printPattern("Adding Individual Units to Legion...", yellow);
    infantryLegion->add(infantry1);
    infantryLegion->add(infantry2);
    infantryLegion->add(infantry3);
    std::cout << yellow << "Added three Infantry units to the Legion." << reset << std::endl;

    cout << endl;
    // Create a sub-legion and add it to the infantryLegion (demonstrating a composite of composites)
    printPattern(pattern, red);
    InfantryLegion* subLegion = new InfantryLegion();
    subLegion->add(infantry2);
    infantryLegion->add(subLegion);
    std::cout << red << "Sub-Legion created and added to the main Infantry Legion." << reset << std::endl;


    cout << endl;

    // Perform actions on the legion and all its components
    std::cout << "\nExecuting Composite Pattern Test:\n" << std::endl;

    printPattern(pattern, blue);
    infantryLegion->move();  // Should move all units in the legion and sub-legion
    cout << endl;
    std::cout << blue << "Infantry Legion and its sub-legion have moved!" << reset << std::endl;

    printPattern(pattern, yellow);
    infantryLegion->attack();  // Should execute attack for all units in the legion and sub-legion
    std::cout << yellow << "Infantry Legion and its sub-legion have attacked!" << reset << std::endl;

    cout << endl;

    // Clean up
    printPattern("Cleaning up resources...", red);
    std::cout << red << "Cleaning up the Legion and its components..." << reset << std::endl;

    delete infantry1;
    delete infantry2;
    delete infantry3;
    delete subLegion;
    delete infantryLegion;
    delete woodlandFactory;

    std::cout << green << "Cleanup completed. All resources have been successfully deleted." << reset << std::endl;
   }

void testStrategy() {
 const std::string red = "\033[31m";
    const std::string green = "\033[32m";
    const std::string blue = "\033[34m";
    const std::string yellow = "\033[33m";
    const std::string reset = "\033[0m";
    const std::string pattern = "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ";

    // Create factories for different terrains
    printPattern("Creating Legion Factories for Different Terrains...", blue);
       std::string heading = "Strategy Design Pattern";
    std::string separator = std::string(30, '=');
    cout << endl;
cout << endl;
printPattern(pattern, green);
    typeEffect(separator);
    typeEffect(heading + std::string(30- heading.length(), ' '));
    typeEffect(separator);
printPattern(pattern, green);
cout << endl;

    LegionFactory* woodlandFactory = new WoodlandFactory();
    LegionFactory* riverbankFactory = new RiverbankFactory();
    LegionFactory* openFieldFactory = new OpenFieldFactory();
    std::cout << blue << "Factories created for Woodland, Riverbank, and OpenField terrains." << reset << std::endl;


cout << endl;
    // Create units for each terrain
    printPattern(pattern, green);
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

    std::cout << green << "Units created for Woodland, Riverbank, and OpenField terrains." << reset << std::endl;
cout << endl;

    // Create tactical command object
    TacticalCommand command;
    // Test different strategies on Woodland units
    printPattern(pattern, yellow);

    // Test Flanking strategy
    cout << "Setting Flanking Strategy:\n"; 
    printPattern(pattern, red);
    command.setStrategy(new Flanking());
    command.executeStrategy(woodlandUnits);

   cout << endl;
    cout << endl;

    // Test Fortification strategy
    cout << "Setting Fortification Strategy:\n";
    printPattern(pattern, green);
    command.setStrategy(new Fortification());
    command.executeStrategy(woodlandUnits);

    cout << endl;
    cout << endl;

    // Test Ambush strategy
    printPattern("Setting Ambush Strategy:", blue);
    command.setStrategy(new Ambush());
    command.executeStrategy(woodlandUnits);

   cout <<endl;
    std::cout << pattern << std::endl;
    // Switch to Riverbank units
    printPattern("Testing Strategies on Riverbank Units:", yellow);

    // Test Flanking strategy
    printPattern("Setting Flanking Strategy:", red);
    command.setStrategy(new Flanking());
  //  command.chooseBestStrategy(riverbankUnits);
    command.executeStrategy(riverbankUnits);

   cout << endl;
    cout << endl;

    // Test Fortification strategy
    printPattern("Setting Fortification Strategy:", green);
    command.setStrategy(new Fortification());
    command.executeStrategy(riverbankUnits);

cout << endl;
    // Test Ambush strategy
    printPattern("Setting Ambush Strategy:", blue);
    command.setStrategy(new Ambush());
    command.executeStrategy(riverbankUnits);

cout << endl;
    std::cout << pattern << std::endl;

    // Switch to OpenField units
    printPattern("Testing Strategies on OpenField Units:", yellow);

    // Test Flanking strategy
    printPattern("Setting Flanking Strategy:", red);
    command.setStrategy(new Flanking());
//    command.executeStrategy(openFieldUnits);

 cout << endl;
    cout << endl;

    // Test Fortification strategy
    printPattern("Setting Fortification Strategy:", green);
    command.setStrategy(new Fortification());
   // command.executeStrategy(openFieldUnits);

   cout << endl;
    cout << endl;
    // Test Ambush strategy
    printPattern("Setting Ambush Strategy:", blue);
    command.setStrategy(new Ambush());
//    command.executeStrategy(openFieldUnits);

    std::cout << pattern << std::endl;

    // Clean up
    printPattern("Cleaning up resources...", red);
    delete woodlandFactory;
    delete riverbankFactory;
 //   delete openFieldFactory;
    for (auto unit : woodlandUnits) delete unit;
    for (auto unit : riverbankUnits) delete unit;
  //  for (auto unit : openFieldUnits) delete unit;
    std::cout << green << "Cleanup completed. All resources have been successfully deleted." << reset << std::endl;
}


int main() {
    const std::string red = "\033[31m";
    const std::string green = "\033[32m";
    const std::string yellow = "\033[33m";
    const std::string blue = "\033[34m";
    const std::string magenta = "\033[35m";
    const std::string reset = "\033[0m";

    int choice;
    while (true) {
        std::cout << red << "Design Patterns Demo Menu:\n";
        std::cout << green << "1. Abstract Factory\n";
        std::cout << yellow << "2. Memento\n";
        std::cout << blue << "3. Composite\n";
        std::cout << magenta << "4. Strategy\n";
        std::cout << red << "5. Exit\n";
        std::cout << red << "Enter your choice: " << reset;
        std::cin >> choice;

        switch (choice) {
            case 1:
                testAbstract();
                break;
            case 2:
                testMemento();
                break;
            case 3:
                testComposite();
                break;
            case 4:
                testStrategy();
                break;
            case 5:
                std::cout << "Exiting the demo. Goodbye!\n";
                return 0;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }
}