#include "Ambush.h"

// This strategy relies on units with high terrain adaptability and moderate attack strength.
void Ambush::engage(std::vector<LegionUnit*> units) {
    std::cout << "🕵️‍♂️ **Ambush Strategy Deployed**: Our forces lie hidden, waiting in the shadows to lure the enemy into a cunningly crafted trap where they will be overwhelmed by surprise..." << std::endl;
    std::cout << "Executing Ambush Strategy!" << std::endl;
            for (auto unit : units) {
                if (unit->getTerrainAdaptability() > 7 && unit->getAttackStrength() > 5) {
                    std::cout << "Unit is setting up an ambush!" << std::endl;
                    unit->move();
                    unit->attack();
                } else {
                    std::cout << "Unit is not suitable for an ambush." << std::endl;
                }
            }
}
