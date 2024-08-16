#ifndef WOODLAND_ARTILLERY_H
#define WOODLAND_ARTILLERY_H

#include "Artillery.h"

class WoodlandArtillery : public Artillery {

    public:
        virtual void move();
        virtual void attack();
};

#endif // WOODLAND_ARTILLERY_H
