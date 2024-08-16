// Class definition for 4. Abstract Factory

#ifndef WOODLAND_FACTORY_H
#define WOODLAND_FACTORY_H

#include "LegionFactory.h"
#include "WoodlandInfantry.h"
#include "WoodlandCavalry.h"
#include "WoodlandArtillery.h"

class WoodlandFactory : public LegionFactory {

    public:
        virtual Infantry* createInfantry();
        virtual Cavalry* createCavalry();
        virtual Artillery* createArtillery();
};

#endif // WOODLAND_FACTORY_H
