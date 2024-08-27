// Class implementation for 5. Strategy (Concrete Strategy)

#include "Ambush.h"

using namespace std;


// This strategy relies on units with high terrain adaptability and moderate attack strength.
void Ambush::engage(vector<LegionUnit*> units) {
    cout << "🕵️‍♂️ -- Ambush Strategy Deployed: Our forces lie hidden, waiting in the shadows to lure the enemy into a cunningly crafted trap where they will be overwhelmed by surprise..." << endl;
    cout << "Executing Ambush Strategy!" << endl;

    for (auto unit : units) {
        if (unit->getTerrainAdaptability() > 7 && unit->getAttackStrength() > 5) {
            cout << "Unit is setting up an ambush!" << endl;
            unit->move();
            unit->attack();
        } else {
                cout << "Unit is not suitable for an ambush." << endl;
        }
    }
}
