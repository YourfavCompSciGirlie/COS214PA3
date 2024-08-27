// Class implementation for 4. Abstract Factory (Abstract Product)

#include "Cavalry.h"

using namespace std;


void Cavalry::add(UnitComponent *unit) {
    terrainUnits.push_back(unit);
}



void Cavalry::remove(UnitComponent *unit)
{
    for (auto it = terrainUnits.begin(); it != terrainUnits.end(); ++it) {
        if (*it == unit) {
            terrainUnits.erase(it);
            break;
        }
    }
}
