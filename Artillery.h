#ifndef ARTILLERY_H
#define ARTILLERY_H

#include "LegionUnit.h"

#include <iostream>

class Artillery : public LegionUnit {
    
    public:
        // Added OWN functions
        Artillery();
        virtual ~Artillery();
        
        virtual void move() = 0;
        virtual void attack() = 0;
};

#endif // ARTILLERY_H
