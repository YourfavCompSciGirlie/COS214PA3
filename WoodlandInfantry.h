#ifndef WOODLAND_INFANTRY_H
#define WOODLAND_INFANTRY_H

#include "Infantry.h"

class WoodlandInfantry : public Infantry {

    public:
        virtual void move();
        virtual void attack();
};

#endif // WOODLAND_INFANTRY_H
