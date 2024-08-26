// Class definition for 4. Abstract Factory

#ifndef LEGIONFACTORY_H
#define LEGIONFACTORY_H

#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"

using namespace std;

class LegionFactory {

    public:

        // Added OWN function
        LegionFactory();
        virtual ~LegionFactory();
        
        virtual Infantry* createInfantry() = 0;
        virtual Cavalry* createCavalry() = 0;
        virtual Artillery* createArtillery() = 0;

        virtual void deployArtillery() = 0;
};

#endif // LEGIONFACTORY_H
