#ifndef UNITCOMPONENT_H
#define UNITCOMPONENT_H

#include <iostream>
#include <string>
// #include "Infantry.h"
// #include "Cavalry.h"
// #include "Artillery.h"

/*This is like a blueprint that tells us what both individual items (leaves) and groups of items (composites) should be able to do. 
It lists the things they all have in common.*/

class UnitComponent
{
   public:
      virtual void move() = 0;
      virtual void attack() = 0;
      virtual void add(UnitComponent* component) = 0;
      virtual void remove(UnitComponent* component) = 0;
};


#endif