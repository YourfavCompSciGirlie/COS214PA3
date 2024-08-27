// Class implementation for 4. Abstract Factory (Abstract Product)

#include "Infantry.h"

using namespace std;


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
}
