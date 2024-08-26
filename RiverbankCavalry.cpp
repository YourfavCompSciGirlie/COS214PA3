#include "RiverbankCavalry.h"

#include <iostream>

using namespace std;


// Constructor
RiverbankCavalry::RiverbankCavalry() {
    this->mobility = 7;
    this->defense = 6;
    this->attackStrength = 6;
    this->terrainAdaptability = 7;

    cout << "Riverbank Cavalry: Mounted and ready to maneuver along the riverbanks, equipped for swift strikes..." << endl;
}


// Destructor
RiverbankCavalry::~RiverbankCavalry() {
    cout << "Riverbank Cavalry: Disengaging from the riverbank, mission complete..." << endl;
}


int RiverbankCavalry::getMobility() {
    return mobility;
}



int RiverbankCavalry::getDefense() {
    return defense;
}



int RiverbankCavalry::getAttackStrength() {
    return attackStrength;
}



int RiverbankCavalry::getTerrainAdaptability() {
    return terrainAdaptability;
}


void RiverbankCavalry::move() {
    std::cout << "Riverbank Cavalry galloping along the riverbank with precision." << std::endl;
}



void RiverbankCavalry::attack() {
    std::cout << "Riverbank Cavalry flanking the enemy near the river." << std::endl;
}
