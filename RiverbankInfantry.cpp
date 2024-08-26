#include "RiverbankInfantry.h"

#include <iostream>

using namespace std;


// Constructor
RiverbankInfantry::RiverbankInfantry() {
    this->mobility = 6;
    this->defense = 7;
    this->attackStrength = 5;
    this->terrainAdaptability = 8;

    cout << "Riverbank Infantry: Ready to take position by the river, equipped for aquatic engagements..." << endl;
}


// Destructor
RiverbankInfantry::~RiverbankInfantry() {
    cout << "Riverbank Infantry: Retreating from the riverbank, mission accomplished..." << endl;
}



int RiverbankInfantry::getMobility() {
    return mobility;
}



int RiverbankInfantry::getDefense() {
    return defense;
}



int RiverbankInfantry::getAttackStrength() {
    return attackStrength;
}



int RiverbankInfantry::getTerrainAdaptability() {
    return terrainAdaptability;
}



void RiverbankInfantry::move() {
    std::cout << "Riverbank Infantry moving swiftly along the river's edge." << std::endl;
}



void RiverbankInfantry::attack() {
    std::cout << "Riverbank Infantry attacking from a fortified riverbank position." << std::endl;
}
