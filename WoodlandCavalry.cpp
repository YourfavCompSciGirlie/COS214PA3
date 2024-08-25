#include "WoodlandCavalry.h"

#include <iostream>

using namespace std;


// Constructor
WoodlandCavalry::WoodlandCavalry() {
    cout << "Woodland Cavalry: Emerging from the forest with speed and agility..." << endl;
}


// Destructor
WoodlandCavalry::~WoodlandCavalry() {
    cout << "Woodland Cavalry: Retreating back into the woods..." << endl;
}



void WoodlandCavalry::move() {
    std::cout << "Woodland Cavalry navigating through dense forests with agility." << std::endl;
}



void WoodlandCavalry::attack() {
    std::cout << "Woodland Cavalry launching a swift attack from the cover of trees." << std::endl;
}
