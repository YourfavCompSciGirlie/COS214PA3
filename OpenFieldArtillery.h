#ifndef OPENFIELD_ARTILLERY_H
#define OPENFIELD_ARTILLERY_H

#include "Artillery.h"

class OpenFieldArtillery : public Artillery {
    
    public:
        virtual void move();
        virtual void attack();
};

#endif // OPENFIELD_ARTILLERY_H
