#include "Legion.h"

void Legion::add(UnitComponent *unit) override
{
   if(unit != NULL) {
      legions.push_back(unit);
   }
}

void Legion::remove(UnitComponent *unit) override
{
   if(unit != NULL) {
      for(auto it = legions.begin(); it != legions.end(); ++it) {
         if(*it == unit) {
            legions.erase(it);
         }
      }
      //legions.erase(std::remove(legions.begin(), legions.end(), unit), legions.end());
   }
}

void Legion::move() override
{
   for(UnitComponent *unit : legions) {
      unit->move();
   }
}

void Legion::fight() override
{
   for(UnitComponent *unit : legions) {
      unit->fight();
   }
}
