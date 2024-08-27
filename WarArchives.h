// Class definition for 6. Memento (Caretaker)

#ifndef WARARCHIVES_H
#define WARARCHIVES_H

#include <string>
#include <vector>
#include <map>

#include "TacticalMemento.h"

using namespace std;

class WarArchives { // Caretaker

   private:
      map<string, TacticalMemento*> mementos;
      
   public:
      // Added OWN functions3
      WarArchives() {}
      ~WarArchives() {}

      void addTacticalMemento(TacticalMemento* memento, string label);
      void removeTacticalMemento(string label);
      TacticalMemento* getTacticalMemento(string label);
};

#endif