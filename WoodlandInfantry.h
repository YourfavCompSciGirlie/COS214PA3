#ifndef WOODLANDINFANTRY_H
#define WOODLANDINFANTRY_H

#include "Infantry.h"

#include <iostream>

class WoodlandInfantry : public Infantry {

    public:
        // Added OWN functions
        WoodlandInfantry();
        ~WoodlandInfantry();

        void move();
        void attack();
};

#endif // WOODLANDINFANTRY_H
