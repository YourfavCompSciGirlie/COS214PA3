// Class definition for 4. Abstract Factory

#ifndef OPENFIELDFACTORY_H
#define OPENFIELDFACTORY_H

#include "LegionFactory.h"
#include "OpenFieldInfantry.h"
#include "OpenFieldCavalry.h"
#include "OpenFieldArtillery.h"

using namespace std;

class OpenFieldFactory : public LegionFactory {
    
    public:
        // Added OWN functions
        OpenFieldFactory();
        ~OpenFieldFactory();

        Infantry* createInfantry();
        Cavalry* createCavalry();
        Artillery* createArtillery();

        void deployArtillery();
};

#endif // OPENFIELDFACTORY_H
