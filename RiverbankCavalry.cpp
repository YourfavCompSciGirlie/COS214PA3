#include "RiverbankCavalry.h"

#include <iostream>

using namespace std;


// Constructor
RiverbankCavalry::RiverbankCavalry() {
    cout << "Riverbank Cavalry: Mounted and ready to maneuver along the riverbanks, equipped for swift strikes..." << endl;
}


// Destructor
RiverbankCavalry::~RiverbankCavalry() {
    cout << "Riverbank Cavalry: Disengaging from the riverbank, mission complete..." << endl;
}



void RiverbankCavalry::move() {
    std::cout << "Riverbank Cavalry galloping along the riverbank with precision." << std::endl;
}



void RiverbankCavalry::attack() {
    std::cout << "Riverbank Cavalry flanking the enemy near the river." << std::endl;
}
