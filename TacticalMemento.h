#ifndef TACTICALMENTO_H
#define TACTICALMENTO_H

#include "BattleStrategy.h"

class TacticalMemento
{
   private:
      BattleStrategy* strategy;
   public: 
      TacticalMemento();
      void storeStrategy(BattleStrategy* strategy);
      virtual ~TacticalMemento();
      BattleStrategy* getStrategy();
      

};

#endif