// Class implementation for 5. Strategy (Concrete Strategy)

#include "Fortification.h"

using namespace std;


// This strategy focuses on defense, making it ideal for units with high defense and terrain adaptability.
void Fortification::engage(vector<LegionUnit*> units) {
    cout << "🏰 -- Fortification Protocol: We are bolstering our defenses, constructing barriers, and reinforcing our positions to withstand enemy assaults with unyielding resilience..." << endl;
    cout << "Executing Fortification Strategy!" << endl;
    
    for (auto unit : units) {
        if (unit->getDefense() > 7 && unit->getTerrainAdaptability() > 6) {
            cout << "Unit is fortifying the position!" << endl;
            unit->move();
            unit->attack();
        } else {
            cout << "Unit is not suitable for fortification." << endl;
        }
    }
}
