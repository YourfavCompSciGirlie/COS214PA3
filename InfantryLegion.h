// Class definition for 7. Composite (Composite Child Class)

#include "Legion.h"

#include <istream>

using namespace std;

class InfantryLegion : public Legion {
    
    public:
        void move() override {
            cout << "Infantry Legion is advancing!" << endl;
            Legion::move();  // Call base class move() to delegate to all units in the collection
        }

        void attack() override {
            cout << "Infantry Legion is engaging the enemy!" << endl;
            Legion::attack();  // Call base class fight() to delegate to all units in the collection
        }
};