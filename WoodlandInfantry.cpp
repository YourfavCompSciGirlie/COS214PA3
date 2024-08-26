#include "WoodlandInfantry.h"

#include <iostream>

using namespace std;

// Constructor
WoodlandInfantry::WoodlandInfantry() {
    this->mobility = 7;
    this->defense = 8;
    this->attackStrength = 6;
    this->terrainAdaptability = 9;

    cout << "Woodland Infantry: Stepping silently through the underbrush..." << endl;
}


// Destructor
WoodlandInfantry::~WoodlandInfantry() {
    cout << "Woodland Infantry: Disappearing into the woods..." << endl;
}



int WoodlandInfantry::getMobility() {
    return mobility;
}



int WoodlandInfantry::getDefense() {
    return defense;
}



int WoodlandInfantry::getAttackStrength() {
    return attackStrength;
}



int WoodlandInfantry::getTerrainAdaptability() {
    return terrainAdaptability;
}


void WoodlandInfantry::move() {
    std::cout << "Woodland Infantry moving stealthily through the forest." << std::endl;
}



void WoodlandInfantry::attack() {
    std::cout << "Woodland Infantry launching a surprise attack from the trees." << std::endl;
}
