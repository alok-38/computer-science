#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
using namespace std;

int main()
{
    srand(time(0));                // Seed the random number generator
    int number = rand() % 100 + 1; // Random number between 1 and 100
    int guess;
    int attempts = 0;
    const int max_attempts = 7;

    cout << "Guess the number (between 1 and 100). You have " << max_attempts << " attempts." << endl;

    while (attempts < max_attempts)
    {
        cout << "Attempt " << (attempts + 1) << ": ";
        cin >> guess;

        if (guess == number)
        {
            cout << "🎉 Correct! You guessed the number in " << (attempts + 1) << " attempts." << endl;
            break;
        }
        else if (guess < number)
        {
            cout << "Too low!" << endl;
        }
        else
        {
            cout << "Too high!" << endl;
        }

        attempts++;
    }

    if (guess != number)
    {
        cout << "❌ You've used all attempts! The number was " << number << "." << endl;
    }

    return 0;
}
