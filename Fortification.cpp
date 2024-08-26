#include "Fortification.h"

// This strategy focuses on defense, making it ideal for units with high defense and terrain adaptability.
void Fortification::engage(std::vector<LegionUnit*> units) {
    std::cout << "🏰 **Fortification Protocol**: We are bolstering our defenses, constructing barriers, and reinforcing our positions to withstand enemy assaults with unyielding resilience..." << std::endl;
    std::cout << "Executing Fortification Strategy!" << std::endl;
            for (auto unit : units) {
                if (unit->getDefense() > 7 && unit->getTerrainAdaptability() > 6) {
                    std::cout << "Unit is fortifying the position!" << std::endl;
                    unit->move();
                    unit->attack();
                } else {
                    std::cout << "Unit is not suitable for fortification." << std::endl;
                }
            }
}
