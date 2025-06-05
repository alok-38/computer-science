#include <iostream>
using namespace std;

int main() {
    int score = 0;
    char playerSymbol = 'P';
    int playerPosition = 5;  // position on a 1D line (0 to 10)
    bool isGameOver = false;
    char input;

    cout << "Move the player left (a) or right (d). Press q to quit." << endl;

    while (!isGameOver) {
        // Display current position and score
        cout << "Player position: " << playerPosition << " | Score: " << score << endl;
        cout << "Enter command (a/d/q): ";
        cin >> input;

        if (input == 'a') {
            if (playerPosition > 0) {
                playerPosition--;
                score += 10;
            } else {
                cout << "You can't move left anymore!" << endl;
            }
        } else if (input == 'd') {
            if (playerPosition < 10) {
                playerPosition++;
                score += 10;
            } else {
                cout << "You can't move right anymore!" << endl;
            }
        } else if (input == 'q') {
            isGameOver = true;
            cout << "Quitting game..." << endl;
        } else {
            cout << "Invalid command! Use 'a', 'd', or 'q'." << endl;
        }
    }
    cout << "Final score: " << score << endl;
    cout << "Thanks for playing!" << endl;
    return 0;
}

