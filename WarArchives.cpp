// Class implementation for 6. Memento (Caretaker)

#include "WarArchives.h"

using namespace std;


void WarArchives::addTacticalMemento(TacticalMemento *memento, string label) {
   mementos[label] = memento;
}



void WarArchives::removeTacticalMemento(string label) {
   if (label != "") {
      mementos.erase(label);
   }
}



TacticalMemento *WarArchives::getTacticalMemento(string label) {
   if (label != "") {
      return mementos[label];
   } else {
      return NULL;
   }
}
