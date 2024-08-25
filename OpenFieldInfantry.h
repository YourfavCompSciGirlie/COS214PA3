#ifndef OPENFIELDINFANTRY_H
#define OPENFIELDINFANTRY_H

#include "Infantry.h"

#include <iostream>

class OpenFieldInfantry : public Infantry {

    public:
        // Added OWN functions
        OpenFieldInfantry();
        ~OpenFieldInfantry();

        void move();
        void attack();
};

#endif // OPENFIELDINFANTRY_H
