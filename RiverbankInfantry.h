#ifndef RIVERBANKINFANTRY_H
#define RIVERBANKINFANTRY_H

#include "Infantry.h"

using namespace std;

class RiverbankInfantry : public Infantry {
    
    public:
    // Added OWN functions
        RiverbankInfantry();
        ~RiverbankInfantry();

        void move();
        void attack();
};

#endif // RIVERBANKINFANTRY_H
