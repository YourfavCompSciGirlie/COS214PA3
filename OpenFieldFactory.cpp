// Class implementation for 4. Abstract Factory

#include "OpenFieldFactory.h"

using namespace std;

// Constructor definition
OpenFieldFactory::OpenFieldFactory() {
    cout << "OpenFieldFactory is here! Ready to roll out units for the open fields!" << endl;
}

// Destructor definition
OpenFieldFactory::~OpenFieldFactory() {
    cout << "OpenFieldFactory signing off. Catch you later!" << endl;
}



Infantry* OpenFieldFactory::createInfantry() {
    cout << "Creating OpenField Infantry unit." << endl;
    return new OpenFieldInfantry();
}



Cavalry* OpenFieldFactory::createCavalry() {
    cout << "Creating OpenField Cavalry unit." << endl;
    return new OpenFieldCavalry();
}



Artillery* OpenFieldFactory::createArtillery() {
    cout << "Creating OpenField Artillery unit." << endl;
    return new OpenFieldArtillery();
}



// Deploy specific artillery for OpenField terrain
void OpenFieldFactory::deployArtillery() {
    cout << "Deploying artillery adapted for open field conditions: Long-range and heavy systems." << endl;
}