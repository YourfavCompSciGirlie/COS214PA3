#include "WoodlandInfantry.h"

#include <iostream>

using namespace std;

// Constructor
WoodlandInfantry::WoodlandInfantry() {
    cout << "Woodland Infantry: Stepping silently through the underbrush..." << endl;
}


// Destructor
WoodlandInfantry::~WoodlandInfantry() {
    cout << "Woodland Infantry: Disappearing into the woods..." << endl;
}



void WoodlandInfantry::move() {
    std::cout << "Woodland Infantry moving stealthily through the forest." << std::endl;
}



void WoodlandInfantry::attack() {
    std::cout << "Woodland Infantry launching a surprise attack from the trees." << std::endl;
}
