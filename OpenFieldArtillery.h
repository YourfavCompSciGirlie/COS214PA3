#ifndef OPENFIELDARTILLERY_H
#define OPENFIELDARTILLERY_H

#include "Artillery.h"

#include <iostream>

class OpenFieldArtillery : public Artillery {
    
    public:
        // Added OWN functions
        OpenFieldArtillery();
        ~OpenFieldArtillery();

        void move();
        void attack();
};

#endif // OPENFIELDARTILLERY_H
