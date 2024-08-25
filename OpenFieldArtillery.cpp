#include "OpenFieldArtillery.h"

#include <iostream>

using namespace std;


// Constructor
OpenFieldArtillery::OpenFieldArtillery() {
    cout << "OpenField Artillery: Positioned and ready, prepared for long-range bombardment across open terrain..." << endl;
}

// Destructor
OpenFieldArtillery::~OpenFieldArtillery() {
    cout << "OpenField Artillery: Wrapping up operations, retreating from the battlefield..." << endl;
}


void OpenFieldArtillery::move() {
    std::cout << "Open Field Artillery being strategically placed in the open terrain." << std::endl;
}



void OpenFieldArtillery::attack() {
    std::cout << "Open Field Artillery delivering devastating bombardment across the fields." << std::endl;
}
