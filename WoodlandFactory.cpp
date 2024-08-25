// Class implementation for 4. Abstract Factory Method

#include "WoodlandFactory.h"

using namespace std;

// Constructor definition
WoodlandFactory::WoodlandFactory() {
    cout << "WoodlandFactory is here, ready to create woodland warriors!" << endl;
}

// Destructor definition
WoodlandFactory::~WoodlandFactory() {
    cout << "WoodlandFactory is packing up. Time to say goodbye!" << endl;
}



Infantry* WoodlandFactory::createInfantry() {
    cout << "Creating Woodland Infantry unit." << endl;
    return new WoodlandInfantry();
}



Cavalry* WoodlandFactory::createCavalry() {
    cout << "Creating Woodland Cavalry unit." << endl;
    return new WoodlandCavalry();
}



Artillery* WoodlandFactory::createArtillery() {
    cout << "Creating Woodland Artillery unit." << endl;
    return new WoodlandArtillery();
}



// Deploy specific artillery for Woodland terrain
void WoodlandFactory::deployArtillery() {
    cout << "Deploying artillery adapted for woodland conditions: Camouflaged and mobile systems." << endl;
}
