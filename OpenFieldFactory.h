// Class definition for 4. Abstract Factory

#ifndef OPENFIELD_FACTORY_H
#define OPENFIELD_FACTORY_H

#include "LegionFactory.h"
#include "OpenFieldInfantry.h"
#include "OpenFieldCavalry.h"
#include "OpenFieldArtillery.h"

class OpenFieldFactory : public LegionFactory {
    
    public:
        virtual Infantry* createInfantry();
        virtual Cavalry* createCavalry();
        virtual Artillery* createArtillery();
};

#endif // OPENFIELD_FACTORY_H
