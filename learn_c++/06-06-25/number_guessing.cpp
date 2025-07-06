#include <iostream>
#include <cstdlib>   // for rand(), srand()
#include <ctime>     // for time()
#include <stdexcept> // for std::invalid_argument

int main()
{
    // Declaration statements
    int secretNumber, guess, attempts = 5;
    bool guessedCorrectly = false;

    // Initialize random seed
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    secretNumber = std::rand() % 20 + 1; // random number between 1 and 20

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "I'm thinking of a number between 1 and 20.\n";
    std::cout << "You have " << attempts << " attempts to guess it.\n";
}
