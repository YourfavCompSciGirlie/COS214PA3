// Class definition for 4. Abstract Factory

#ifndef LEGION_FACTORY_H
#define LEGION_FACTORY_H

#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"

class LegionFactory {

    public:
        virtual ~LegionFactory() {}
        
        virtual Infantry* createInfantry() = 0;
        virtual Cavalry* createCavalry() = 0;
        virtual Artillery* createArtillery() = 0;
};

#endif // LEGION_FACTORY_H
