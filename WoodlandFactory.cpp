// Class implementation for 4. Abstract Factory Method

#include "WoodlandFactory.h"


Infantry* WoodlandFactory::createInfantry() {
    return new WoodlandInfantry();
}



Cavalry* WoodlandFactory::createCavalry() {
    return new WoodlandCavalry();
}



Artillery* WoodlandFactory::createArtillery() {
    return new WoodlandArtillery();
}
