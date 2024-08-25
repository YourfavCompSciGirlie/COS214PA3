#ifndef RIVERBANKARTILLERY_H
#define RIVERBANKARTILLERY_H

#include "Artillery.h"

#include <iostream>

class RiverbankArtillery : public Artillery {
    
    public:
        // Added OWN function
        RiverbankArtillery();
        ~RiverbankArtillery();

        void move();
        void attack();
};

#endif // RIVERBANKARTILLERY_H
