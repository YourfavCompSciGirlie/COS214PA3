#ifndef RIVERBANK_INFANTRY_H
#define RIVERBANK_INFANTRY_H

#include "Infantry.h"

class RiverbankInfantry : public Infantry {
    
    public:
        virtual void move();
        virtual void attack();
};

#endif // RIVERBANK_INFANTRY_H
