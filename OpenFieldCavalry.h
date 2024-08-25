#ifndef OPENFIELDCAVALRY_H
#define OPENFIELDCAVALRY_H

#include "Cavalry.h"

#include <iostream>

class OpenFieldCavalry : public Cavalry {
    
    public:
        // Added OWN functions
        OpenFieldCavalry();
        ~OpenFieldCavalry();

        void move();
        void attack();
};

#endif // OPENFIELDCAVALRY_H
