// Class definition for 6. Memento (Originator Class)

#ifndef TACTICALPLANNER_H
#define TACTICALPLANNER_H

#include "BattleStrategy.h"
#include "TacticalMemento.h"

#include <string>
#include <vector>

using namespace std;

class TacticalPlanner {

      private:
         BattleStrategy* currentStrategy;

      public:
         // Added OWN functions
         TacticalPlanner() {}
         ~TacticalPlanner() {}

         TacticalMemento* createMemento();
         void restoreMemento(TacticalMemento* memento);
         void setStrategy(BattleStrategy* strategy);
         BattleStrategy* getStrategy();
};

#endif