#ifndef WOODLANDCAVALRY_H
#define WOODLANDCAVALRY_H

#include "Cavalry.h"

#include <iostream>

class WoodlandCavalry : public Cavalry {

    public:
        // Added OWN functions
        WoodlandCavalry();
        ~WoodlandCavalry();

        void move();
        void attack();
};

#endif // WOODLANDCAVALRY_H
