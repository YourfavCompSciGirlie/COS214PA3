#include "RiverbankArtillery.h"

#include <iostream>

using namespace std;

// Constructor
RiverbankArtillery::RiverbankArtillery() {
    this->mobility = 5;
    this->defense = 5;
    this->attackStrength = 8;
    this->terrainAdaptability = 7;

    cout << "Riverbank Artillery: Positioned along the riverbank, ready to provide heavy firepower support..." << endl;
}



// Destructor
RiverbankArtillery::~RiverbankArtillery() {
    cout << "Riverbank Artillery: Ceasing fire and securing position, mission accomplished..." << endl;
}



int RiverbankArtillery::getMobility() {
    return mobility;
}



int RiverbankArtillery::getDefense() {
    return defense;
}



int RiverbankArtillery::getAttackStrength() {
    return attackStrength;
}



int RiverbankArtillery::getTerrainAdaptability() {
    return terrainAdaptability;
}



void RiverbankArtillery::move() {
    std::cout << "Riverbank Artillery being positioned along the riverbank." << std::endl;
}



void RiverbankArtillery::attack() {
    std::cout << "Riverbank Artillery launching heavy bombardment across the river." << std::endl;
}
