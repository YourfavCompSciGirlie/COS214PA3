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

// Destructor
// Cavalry::~Cavalry() {
//     cout << "Cavalry: Dismounting and heading to rest." << endl;
// }
