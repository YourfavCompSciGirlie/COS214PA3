#include "OpenFieldArtillery.h"

#include <iostream>

using namespace std;


// Constructor
OpenFieldArtillery::OpenFieldArtillery() {
    this->mobility = 4;
    this->defense = 6;
    this->attackStrength = 9;
    this->terrainAdaptability = 5;

    cout << "OpenField Artillery: Positioned and ready, prepared for long-range bombardment across open terrain..." << endl;
}

// Destructor
OpenFieldArtillery::~OpenFieldArtillery() {
    cout << "OpenField Artillery: Wrapping up operations, retreating from the battlefield..." << endl;
}



int OpenFieldArtillery::getMobility() {
    return mobility;
}



int OpenFieldArtillery::getDefense() {
    return defense;
}



int OpenFieldArtillery::getAttackStrength() {
    return attackStrength;
}



int OpenFieldArtillery::getTerrainAdaptability() {
    return terrainAdaptability;
}



void OpenFieldArtillery::move() {
    std::cout << "Open Field Artillery being strategically placed in the open terrain." << std::endl;
}



void OpenFieldArtillery::attack() {
    std::cout << "Open Field Artillery delivering devastating bombardment across the fields." << std::endl;
}
