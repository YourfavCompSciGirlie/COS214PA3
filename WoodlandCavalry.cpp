#include "WoodlandCavalry.h"

#include <iostream>

using namespace std;


// Constructor
WoodlandCavalry::WoodlandCavalry() {
    this->mobility = 8;
    this->defense = 6;
    this->attackStrength = 7;
    this->terrainAdaptability = 8;

    cout << "Woodland Cavalry: Emerging from the forest with speed and agility..." << endl;
}


// Destructor
WoodlandCavalry::~WoodlandCavalry() {
    cout << "Woodland Cavalry: Retreating back into the woods..." << endl;
}


int WoodlandCavalry::getMobility() {
    return mobility;
}



int WoodlandCavalry::getDefense() {
    return defense;
}



int WoodlandCavalry::getAttackStrength() {
    return attackStrength;
}



int WoodlandCavalry::getTerrainAdaptability() {
    return terrainAdaptability;
}


void WoodlandCavalry::move() {
    std::cout << "Woodland Cavalry navigating through dense forests with agility." << std::endl;
}



void WoodlandCavalry::attack() {
    std::cout << "Woodland Cavalry launching a swift attack from the cover of trees." << std::endl;
}
