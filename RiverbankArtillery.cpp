#include "RiverbankArtillery.h"

#include <iostream>

using namespace std;

// Constructor
RiverbankArtillery::RiverbankArtillery() {
    cout << "Riverbank Artillery: Positioned along the riverbank, ready to provide heavy firepower support..." << endl;
}



// Destructor
RiverbankArtillery::~RiverbankArtillery() {
    cout << "Riverbank Artillery: Ceasing fire and securing position, mission accomplished..." << endl;
}



void RiverbankArtillery::move() {
    std::cout << "Riverbank Artillery being positioned along the riverbank." << std::endl;
}



void RiverbankArtillery::attack() {
    std::cout << "Riverbank Artillery launching heavy bombardment across the river." << std::endl;
}
