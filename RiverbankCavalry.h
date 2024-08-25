#ifndef RIVERBANKCAVALRY_H
#define RIVERBANKCAVALRY_H

#include "Cavalry.h"

#include <iostream>

class RiverbankCavalry : public Cavalry {

    public:
        // Added OWN functions
        RiverbankCavalry();
        ~RiverbankCavalry();

        void move();
        void attack();
};

#endif // RIVERBANKCAVALRY_H
