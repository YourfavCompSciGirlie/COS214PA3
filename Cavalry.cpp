#include "Cavalry.h"

void Cavalry::add(UnitComponent *unit)
{
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

void Cavalry::move()
{
   std::cout << "Cavalry galloping swiftly across the battlefield." << std::endl;
}
// Destructor
Cavalry::~Cavalry() {
    cout << "Cavalry: Dismounting and heading to rest." << endl;
}
