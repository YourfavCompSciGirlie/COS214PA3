#include "OpenFieldInfantry.h"

#include <iostream>

using namespace std;

// Constructor
OpenFieldInfantry::OpenFieldInfantry() {
    this->mobility = 5;
    this->defense = 8;
    this->attackStrength = 6;
    this->terrainAdaptability = 5;

    cout << "OpenField Infantry: Deployed in the open field, prepared for wide-ranging combat operations." << endl;
}


// Destructor
OpenFieldInfantry::~OpenFieldInfantry() {
    cout << "OpenField Infantry: Returning to base, mission in the open field complete." << endl;
}


int OpenFieldInfantry::getMobility() {
    return mobility;
}



int OpenFieldInfantry::getDefense() {
    return defense;
}



int OpenFieldInfantry::getAttackStrength() {
    return attackStrength;
}



int OpenFieldInfantry::getTerrainAdaptability() {
    return terrainAdaptability;
}


void OpenFieldInfantry::move() {
    std::cout << "Open Field Infantry advancing across the open plains." << std::endl;
}



void OpenFieldInfantry::attack() {
    std::cout << "Open Field Infantry charging head-on into battle." << std::endl;
}
