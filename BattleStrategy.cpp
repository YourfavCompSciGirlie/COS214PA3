// Class implementation for 5. Strategy (Abstract Strategy)

#include "BattleStrategy.h"

using namespace std;


TacticalMemento *BattleStrategy::saveToMemento() {
    TacticalMemento* memento = new TacticalMemento();
    memento->storeStrategy(this);
    
    return memento;
}



void BattleStrategy::restoreFromMemento(TacticalMemento *memento) {
    memento->getStrategy();
}
