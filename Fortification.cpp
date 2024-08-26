#include "Fortification.h"

void Fortification::engage() {
    std::cout << "🏰 **Fortification Protocol**: We are bolstering our defenses, constructing barriers, and reinforcing our positions to withstand enemy assaults with unyielding resilience." << std::endl;
    std::cout << "Executing Ambush Strategy based on terrain: " 
        << conditions.terrain << " and weather: " << conditions.weather 
        << std::endl;
}
