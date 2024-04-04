#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Define an enumeration for the different cheats available
enum Cheats {
    INVINCIBILITY,
    UNLIMITED_AMMO,
    GOD_MODE,
    NUM_CHEATS
};

// Initialize a vector of pairs to store the cheats
std::vector<std::pair<std::string, bool>> cheats {
    {"Invincibility", false},
    {"Unlimited Ammo", false},
    {"God Mode", false}
};

int main() {
    // Accessing and modifying cheat states
    cheats[INVINCIBILITY].second = true;
    std::cout << "Invincibility is now " << (cheats[INVINCIBILITY].second? "enabled" : "disabled") << "\n";

    // Looping through cheats
    for (auto& cheat : cheats) {
        std::cout << cheat.first << " is " << (cheat.second? "enabled" : "disabled") << "\n";
    }

    return 0;
}