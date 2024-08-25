#ifndef INFANTRY_H
#define INFANTRY_H

#include "LegionUnit.h"

#include <iostream>

class Infantry : public LegionUnit {

    public:
        // Added OWN functions
        Infantry();
        virtual ~Infantry();

        virtual void move() = 0;
        virtual void attack() = 0;
};

#endif // INFANTRY_H
