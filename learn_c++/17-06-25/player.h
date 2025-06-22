#include <string> // Includes the string library for std::string

class player
{
public:
    std::string name; // Public member variable to store player's name

    // Constructor that initializes the 'name' variable using initializer list
    player(const std::string &playerName)
        : name(playerName) {}
};
