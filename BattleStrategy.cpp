#include "BattleStrategy.h"

TacticalMemento *BattleStrategy::saveToMemento()
{
   return new TacticalMemento(this.);
}

void BattleStrategy::restoreFromMemento(TacticalMemento *memento)
{

}
