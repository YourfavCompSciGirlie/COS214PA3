#include "WoodlandArtillery.h"

#include <iostream>

using namespace std;

// Constructor
WoodlandArtillery::WoodlandArtillery() {
    cout << "Woodland Artillery: Setting up in the heart of the forest, ready for action..." << endl;
}


// Destructor
WoodlandArtillery::~WoodlandArtillery() {
    cout << "Woodland Artillery: Dismantling and retreating, leaving no trace behind..." << endl;
}


void WoodlandArtillery::move() {
    std::cout << "Woodland Artillery carefully maneuvering through the forest." << std::endl;
}



void WoodlandArtillery::attack() {
    std::cout << "Woodland Artillery providing long-range support from within the woods." << std::endl;
}
