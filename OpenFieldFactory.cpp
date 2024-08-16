// Class implementation for 4. Abstract Factory

#include "OpenFieldFactory.h"


Infantry* OpenFieldFactory::createInfantry() {
    return new OpenFieldInfantry();
}



Cavalry* OpenFieldFactory::createCavalry() {
    return new OpenFieldCavalry();
}



Artillery* OpenFieldFactory::createArtillery() {
    return new OpenFieldArtillery();
}
