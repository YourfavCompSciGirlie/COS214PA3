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
      ~TacticalMemento() {}

      void storeStrategy(BattleStrategy* strategy);
      virtual ~TacticalMemento();
      BattleStrategy* getStrategy();
      void printStoredStrategy() const;
};

#endif