// Class implementation for 4. Abstract Factory Method

#include "RiverbankFactory.h"

using namespace std;


// Constructor definition
RiverbankFactory::RiverbankFactory() {
    cout << "RiverbankFactory is here, ready to create riverbank troops!" << endl;
}

// Destructor definition
RiverbankFactory::~RiverbankFactory() {
    cout << "RiverbankFactory is heading out. Time to clean up!" << endl;
}

Infantry* RiverbankFactory::createInfantry() {
    cout << "Creating Riverbank Infantry unit." << endl;
    return new RiverbankInfantry();
}



Cavalry* RiverbankFactory::createCavalry() {
    cout << "Creating Riverbank Cavalry unit." << endl;
    return new RiverbankCavalry();
}



Artillery* RiverbankFactory::createArtillery() {
    cout << "Creating Riverbank Artillery unit." << endl;
    return new RiverbankArtillery();
}
