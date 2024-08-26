#include "Legion.h"
#include <iostream>

class CavalryLegion : public Legion {
public:
    void move() override {
        std::cout << "Cavalry Legion is charging!" << std::endl;
        Legion::move();  // Delegate to all units in the collection
    }

    void attack() override {
        std::cout << "Cavalry Legion is attacking the enemy!" << std::endl;
        Legion::attack();  // Delegate to all units in the collection
    }
};