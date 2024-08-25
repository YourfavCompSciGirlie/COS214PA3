// Class definition for 4. Abstract Factory

#ifndef WOODLANDFACTORY_H
#define WOODLANDFACTORY_H

#include "LegionFactory.h"
#include "WoodlandInfantry.h"
#include "WoodlandCavalry.h"
#include "WoodlandArtillery.h"

using namespace std;

class WoodlandFactory : public LegionFactory {

    public:
        // Added OWN functions
        WoodlandFactory();
        ~WoodlandFactory();

        Infantry* createInfantry();
        Cavalry* createCavalry();
        Artillery* createArtillery();
};

#endif // WOODLANDFACTORY_H
