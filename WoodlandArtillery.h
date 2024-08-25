#ifndef WOODLANDARTILLERY_H
#define WOODLANDARTILLERY_H

#include "Artillery.h"

#include <iostream>

class WoodlandArtillery : public Artillery {

    public:
        // Added OWN functions
        WoodlandArtillery();
        ~WoodlandArtillery();

        void move();
        void attack();
};

#endif // WOODLANDARTILLERY_H
