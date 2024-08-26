// Class definition for 7. Composite (Composite Child Class)

#include "Legion.h"

#include <iostream>

using namespace std;

class CavalryLegion : public Legion {
    
    public:
        void move() override {
            cout << "Cavalry Legion is charging!" << endl;
            Legion::move();  // Delegate to all units in the collection
        }

        void attack() override {
            cout << "Cavalry Legion is attacking the enemy!" << endl;
            Legion::attack();  // Delegate to all units in the collection
        }
};