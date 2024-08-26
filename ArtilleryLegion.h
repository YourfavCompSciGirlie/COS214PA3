#include "Legion.h"
#include <iostream>

class ArtilleryLegion : public Legion {
public:
    void move() override {
        std::cout << "Artillery Legion is positioning!" << std::endl;
        Legion::move();  // Delegate to all units in the collection
    }

    void attack() override {
        std::cout << "Artillery Legion is firing!" << std::endl;
        Legion::attack();  // Delegate to all units in the collection
    }
};