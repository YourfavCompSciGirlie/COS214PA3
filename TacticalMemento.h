#ifndef TACTICALMENENTO_H
#define TACTICALMENENTO_H


#include "BattleStrategy.h"
class BattleStrategy;

class TacticalMemento 
{
   private:
   
      BattleStrategy* strategy;
   public: 
      TacticalMemento() {};
      void storeStrategy(BattleStrategy* strategy);
      virtual ~TacticalMemento();
      BattleStrategy* getStrategy();
      

};

#endif