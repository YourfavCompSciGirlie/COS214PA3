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

void Artillery::move()
{
   std::cout << "Artillery positioning itself for a long-range attack." << std::endl;
}

void Artillery::attack() {
    std::cout << "Artillery launching a barrage of explosive projectiles." << std::endl;
}
