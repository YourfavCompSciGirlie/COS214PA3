#ifndef WARARCHIVES_H
#define WARARCHIVES_H

#include <string>
#include <vector>
#include <map>
#include "TacticalMemento.h"
using namespace std;

class WarArchives //caretaker
{
private:
   map<string, TacticalMemento*> mementos;
   
public:
   ~WarArchives() {}
   void addTacticalMemento(TacticalMemento* memento, string label);
   void removeTacticalMemento(string label);
   TacticalMemento* getTacticalMemento(string label);
   
};

#endif
