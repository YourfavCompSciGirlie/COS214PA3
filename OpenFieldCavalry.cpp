#include "OpenFieldCavalry.h"

#include <iostream>

using namespace std;

// Constructor
OpenFieldCavalry::OpenFieldCavalry() {
    this->mobility = 9;
    this->defense = 5;
    this->attackStrength = 7;
    this->terrainAdaptability = 6;

    cout << "OpenField Cavalry: Ready to charge across the open fields, poised for rapid maneuvers..." << endl;
}


// Destructor
OpenFieldCavalry::~OpenFieldCavalry() {
    cout << "OpenField Cavalry: Returning from the field, mission complete with a swift retreat..." << endl;
}


int OpenFieldCavalry::getMobility() {
    return mobility;
}



int OpenFieldCavalry::getDefense() {
    return defense;
}



int OpenFieldCavalry::getAttackStrength() {
    return attackStrength;
}



int OpenFieldCavalry::getTerrainAdaptability() {
    return terrainAdaptability;
}


void OpenFieldCavalry::move() {
    std::cout << "Open Field Cavalry charging across the wide-open fields." << std::endl;
}


void OpenFieldCavalry::attack() {
    std::cout << "Open Field Cavalry delivering a powerful impact on the open plains." << std::endl;
}
