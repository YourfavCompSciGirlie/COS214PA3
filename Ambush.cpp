#include "Ambush.h"

void Ambush::engage() {
    std::cout << "🕵️‍♂️ **Ambush Strategy Deployed**: Our forces lie hidden, waiting in the shadows to lure the enemy into a cunningly crafted trap where they will be overwhelmed by surprise." << std::endl;
    std::cout << "Executing Ambush Strategy based on terrain: " 
                  << conditions.terrain << " and weather: " << conditions.weather 
                  << std::endl;
}
