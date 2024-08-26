
#include "Legion.h"
#include <istream>


class InfantryLegion : public Legion {
public:
    void move() override {
        std::cout << "Infantry Legion is advancing!" << std::endl;
        Legion::move();  // Call base class move() to delegate to all units in the collection
    }

    void attack() override {
        std::cout << "Infantry Legion is engaging the enemy!" << std::endl;
        Legion::attack();  // Call base class fight() to delegate to all units in the collection
    }
};