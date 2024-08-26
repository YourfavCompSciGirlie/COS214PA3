// Class definition for 4. Abstract Factory

#ifndef RIVERBANKFACTORY_H
#define RIVERBANKFACTORY_H

#include "LegionFactory.h"
#include "RiverbankInfantry.h"
#include "RiverbankCavalry.h"
#include "RiverbankArtillery.h"

using namespace std;

class RiverbankFactory : public LegionFactory {

    public:
        // Added OWN functions
        RiverbankFactory();
        ~RiverbankFactory();

        Infantry* createInfantry();
        Cavalry* createCavalry();
        Artillery* createArtillery();

        void deployArtillery();
};

#endif // RIVERBANKFACTORY_H
