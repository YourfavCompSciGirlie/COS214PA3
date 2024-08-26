// Class implementation for 7. Composite (Composite Class)

#include "Legion.h"

using namespace std;


void Legion::add(UnitComponent *unit) {
   if (unit != NULL) {
      legions.push_back(unit);
   }
}



void Legion::remove(UnitComponent *unit) {
   if (unit != NULL) {
      for (auto it = legions.begin(); it != legions.end(); ++it) {
         if (*it == unit) {
            legions.erase(it);
         }
      }
   }
}



void Legion::move() {
   for (UnitComponent *unit : legions) {
      unit->move();
   }
}



void Legion::attack() {
   for (UnitComponent *unit : legions) {
      unit->attack();
   }
}