#include "RiverbankInfantry.h"

#include <iostream>

using namespace std;


// Constructor
RiverbankInfantry::RiverbankInfantry() {
    cout << "Riverbank Infantry: Ready to take position by the river, equipped for aquatic engagements..." << endl;
}


// Destructor
RiverbankInfantry::~RiverbankInfantry() {
    cout << "Riverbank Infantry: Retreating from the riverbank, mission accomplished..." << endl;
}



void RiverbankInfantry::move() {
    std::cout << "Riverbank Infantry moving swiftly along the river's edge." << std::endl;
}



void RiverbankInfantry::attack() {
    std::cout << "Riverbank Infantry attacking from a fortified riverbank position." << std::endl;
}
