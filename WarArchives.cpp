#include "WarArchives.h"

void WarArchives::addTacticalMemento(TacticalMemento *memento, string label)
{
   mementos.insert(label, memento);
}

void WarArchives::removeTacticalMemento(string label)
{
   if(label != "") {
      mementos.erase(label);
   }
}

TacticalMemento *WarArchives::getTacticalMemento(string label)
{
   if (label != "") {
      return mementos[label];
   }
}
