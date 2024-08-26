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

void Infantry::move() {
    std::cout << "Infantry advancing forward with steady steps." << std::endl;
}


// Destructor
Infantry::~Infantry() {
    cout << "Infantry: Heading back to the barracks." << endl;
}
