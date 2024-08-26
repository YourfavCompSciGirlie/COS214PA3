// Class implementation for 5. Strategy (Concrete Strategy)

#include "Flanking.h"

using namespace std;


// This strategy takes advantage of units with high mobility and attack strength.
void Flanking::engage(vector<LegionUnit*> units) {
    cout << "🔍 -- Flanking Maneuver Initiated: We stealthily encircle the enemy, positioning our forces on their flanks to strike with devastating impact from the sides..." << endl;
    for (auto unit : units) {
        if (unit->getMobility() > 7 && unit->getAttackStrength() > 6) {
            cout << "Unit is ideal for flanking!" << endl;
            unit->move();
            unit->attack();
        } else {
            cout << "Unit is not suitable for flanking." << endl;
        }
    }
}