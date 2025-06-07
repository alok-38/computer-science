#include <iostream>
#include <random>

using namespace std;

int main() {
    int player_guess = 0;
    cout << "Guess a number: ";
    cin >> player_guess;
    // Get a random seed
    random_device rd;
    // Initialize Mersenne Twister RNG with the seed
    mt19937 gen(rd());
    // Define distribution range [1, 100]
    uniform_int_distribution<> dist(1, 100);

    int random_number = dist(gen);

    if (player_guess > random_number) {
        cout << "Too high!" << endl;
    } else if (player_guess == random_number) {
        cout << "Yeah!! You are even!" << endl;
    } else {
        cout << "Too low" << endl;
    }


    return 0;
}

