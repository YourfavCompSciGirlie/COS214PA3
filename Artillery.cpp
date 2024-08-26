#include "Artillery.h"

void Artillery::add(UnitComponent *unit)
{
    terrainUnits.push_back(unit);
}

void Artillery::remove(UnitComponent *unit)
{
    for (auto it = terrainUnits.begin(); it != terrainUnits.end(); ++it) {
        if (*it == unit) {
            terrainUnits.erase(it);
            break;
        }
    }
}