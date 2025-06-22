#include <iostream>
using namespace std;

int main() {
    int score = 0;           // integer for player score
    float playerSpeed = 5.5; // floating-point for speed
    bool isGameOver = false; // true or false
    char playerSymbol = 'P'; // single character

    cout << "Player symbol: " << playerSymbol << endl;
    cout << "Starting speed: " << playerSpeed << endl;

    // simulate scoring points
    score += 10;
    cout << "Score: " << score << endl;

    // Simulate game over
    isGameOver = true;

    // if it is true
    if (isGameOver) {
        cout << "Game Over!" << endl;
    }


    return 0;
}


