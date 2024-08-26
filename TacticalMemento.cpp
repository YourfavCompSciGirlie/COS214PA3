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

void TacticalMemento::printStoredStrategy() const {
    if (strategy) {
        std::cout << "Stored Strategy: " << typeid(*strategy).name() << std::endl;
    } else {
        std::cout << "No strategy stored in this memento." << std::endl;
    }
}