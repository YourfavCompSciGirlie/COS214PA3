#include "TacticalMemento.h"

void TacticalMemento::storeStrategy(BattleStrategy *strategy)
{
   this->strategy = strategy;
}

TacticalMemento::~TacticalMemento()
{
   delete this;
}

BattleStrategy* TacticalMemento::getStrategy()
{
   return this->strategy;
}
