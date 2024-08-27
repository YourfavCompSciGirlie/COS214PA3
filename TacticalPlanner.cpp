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

void TacticalPlanner::setStrategy(BattleStrategy *strategy)
{ 

   // if (this->currentStrategy) {
   //      delete this->currentStrategy;
   //      this->currentStrategy = NULL;
   //  }
      this->currentStrategy = strategy; //this line causes a memory leak

}

BattleStrategy *TacticalPlanner::getStrategy()
{
   return this->currentStrategy;
}
