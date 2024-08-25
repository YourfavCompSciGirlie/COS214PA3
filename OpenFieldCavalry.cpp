#include "OpenFieldCavalry.h"

#include <iostream>

using namespace std;

// Constructor
OpenFieldCavalry::OpenFieldCavalry() {
    cout << "OpenField Cavalry: Ready to charge across the open fields, poised for rapid maneuvers..." << endl;
}


// Destructor
OpenFieldCavalry::~OpenFieldCavalry() {
    cout << "OpenField Cavalry: Returning from the field, mission complete with a swift retreat..." << endl;
}


void OpenFieldCavalry::move() {
    std::cout << "Open Field Cavalry charging across the wide-open fields." << std::endl;
}


void OpenFieldCavalry::attack() {
    std::cout << "Open Field Cavalry delivering a powerful impact on the open plains." << std::endl;
}
