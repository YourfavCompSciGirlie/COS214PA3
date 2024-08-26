#include "Flanking.h"

using namespace std;

// This strategy takes advantage of units with high mobility and attack strength.
void Flanking::engage(std::vector<LegionUnit*> units) {
    std::cout << "🔍 **Flanking Maneuver Initiated**: We stealthily encircle the enemy, positioning our forces on their flanks to strike with devastating impact from the sides..." << std::endl;
            for (auto unit : units) {
                if (unit->getMobility() > 7 && unit->getAttackStrength() > 6) {
                    std::cout << "Unit is ideal for flanking!" << std::endl;
                    unit->move();
                    unit->attack();
                } else {
                    std::cout << "Unit is not suitable for flanking." << std::endl;
                }
            }
}