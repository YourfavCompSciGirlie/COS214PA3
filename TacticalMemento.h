// Class definition for 6. Memento (Memento Class)

#ifndef TACTICALMENENTO_H
#define TACTICALMENENTO_H

#include "BattleStrategy.h"

using namespace std;

class BattleStrategy;

class TacticalMemento {
   
   private:
      BattleStrategy* strategy;

   public: 
      // Added OWN functions
      TacticalMemento() {}
      virtual ~TacticalMemento();

      void storeStrategy(BattleStrategy* strategy);
      BattleStrategy* getStrategy();
      void printStoredStrategy() const;
};

#endif