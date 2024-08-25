#include "OpenFieldInfantry.h"

#include <iostream>

using namespace std;

// Constructor
OpenFieldInfantry::OpenFieldInfantry() {
    cout << "OpenField Infantry: Deployed in the open field, prepared for wide-ranging combat operations." << endl;
}


// Destructor
OpenFieldInfantry::~OpenFieldInfantry() {
    cout << "OpenField Infantry: Returning to base, mission in the open field complete." << endl;
}


void OpenFieldInfantry::move() {
    std::cout << "Open Field Infantry advancing across the open plains." << std::endl;
}



void OpenFieldInfantry::attack() {
    std::cout << "Open Field Infantry charging head-on into battle." << std::endl;
}
