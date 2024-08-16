#include "TacticalPlanner.h"

TacticalMemento *TacticalPlanner::createMemento()
{
   TacticalMemento* m = new TacticalMemento();
   m->storeStrategy(this->currentStrategy);

   return m;
}

void TacticalPlanner::restoreMemento(TacticalMemento* memento)
{
   if(memento != NULL) {
      this->currentStrategy = memento->getStrategy();
   }
}
