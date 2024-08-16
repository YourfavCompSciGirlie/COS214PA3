#ifndef RIVERBANK_ARTILLERY_H
#define RIVERBANK_ARTILLERY_H

#include "Artillery.h"

class RiverbankArtillery : public Artillery {
    
    public:
        virtual void move();
        virtual void attack();
};

#endif // RIVERBANK_ARTILLERY_H
