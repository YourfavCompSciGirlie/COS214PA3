#ifndef LEGION_H
#define LEGION_H

#include <iostream>
#include <vector>
#include "UnitComponent.h"
using namespace std;

class Legion : public UnitComponent//composite class
{
   /*
      Manages collections of UnitComponent, treating individual and composite units uniformly.
      Remember that a legion can contain sublegions 
   */
   private:
      vector<UnitComponent*> legions;

   public:
      void add(UnitComponent* unit);
      void remove(UnitComponent* unit);
      virtual void move();
      virtual void attack();

};





#endif