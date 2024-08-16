// Class definition for 4. Abstract Factory

#ifndef RIVERBANK_FACTORY_H
#define RIVERBANK_FACTORY_H

#include "LegionFactory.h"
#include "RiverbankInfantry.h"
#include "RiverbankCavalry.h"
#include "RiverbankArtillery.h"

class RiverbankFactory : public LegionFactory {

    public:
        virtual Infantry* createInfantry();
        virtual Cavalry* createCavalry();
        virtual Artillery* createArtillery();
};

#endif // RIVERBANK_FACTORY_H
