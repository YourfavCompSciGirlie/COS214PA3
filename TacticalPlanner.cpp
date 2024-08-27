// Class implementation for 6. Memento (Originator Class)

#include "TacticalPlanner.h"

using namespace std;


TacticalMemento *TacticalPlanner::createMemento() {
   TacticalMemento* m = new TacticalMemento();
   m->storeStrategy(this->currentStrategy);

   return m;
}



void TacticalPlanner::restoreMemento(TacticalMemento* memento) {
   if (memento != NULL) {
      this->currentStrategy = memento->getStrategy();
   }
}



void TacticalPlanner::setStrategy(BattleStrategy *strategy) {
   if (strategy != NULL) {
      this->currentStrategy = strategy;
   }
}



BattleStrategy *TacticalPlanner::getStrategy() {
   return this->currentStrategy;
}
