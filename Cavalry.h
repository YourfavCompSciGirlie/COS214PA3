#ifndef CAVALRY_H
#define CAVALRY_H

#include "LegionUnit.h"

#include <iostream>

class Cavalry : public LegionUnit {

    public:
        // Added OWN function
        Cavalry();
        virtual ~Cavalry();

        virtual void move() = 0;
        virtual void attack() = 0;
};

#endif // CAVALRY_H
