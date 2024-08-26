#include "BattleStrategy.h"

TacticalMemento *BattleStrategy::saveToMemento()
{
   TacticalMemento* memento = new TacticalMemento();
    memento->storeStrategy(this);
    return memento;
}

void BattleStrategy::restoreFromMemento(TacticalMemento *memento)
{
    BattleStrategy* savedStrategy = memento->getStrategy();
}
