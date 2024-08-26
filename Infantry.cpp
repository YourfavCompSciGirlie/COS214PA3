#include "Infantry.h"

void Infantry::add(UnitComponent* unit) {
    terrainUnits.push_back(unit);
}

void Infantry::remove(UnitComponent* unit) {
    for (auto it = terrainUnits.begin(); it != terrainUnits.end(); ++it) {
        if (*it == unit) {
            terrainUnits.erase(it);
            break;
        }
    }
   // terrainUnits.erase(std::remove(terrainUnits.begin(), terrainUnits.end(), component), terrainUnits.end());
}

