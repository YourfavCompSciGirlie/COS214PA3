// Class implementation for 6. Memento (Memento Class)

#include "TacticalMemento.h"

using namespace std;


void TacticalMemento::storeStrategy(BattleStrategy *strategy) {
   this->strategy = strategy;
}



TacticalMemento::~TacticalMemento() {
   delete this;
}



BattleStrategy* TacticalMemento::getStrategy() {
   return this->strategy;
}



void TacticalMemento::printStoredStrategy() const {
    if (strategy) {
        cout << "Stored Strategy: " << typeid(*strategy).name() << endl;
    } else {
        cout << "No strategy stored in this memento." << endl;
    }
}