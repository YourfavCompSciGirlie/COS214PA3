#ifndef OPENFIELD_INFANTRY_H
#define OPENFIELD_INFANTRY_H

#include "Infantry.h"

class OpenFieldInfantry : public Infantry {

    public:
        virtual void move();
        virtual void attack();
};

#endif // OPENFIELD_INFANTRY_H
