#include <iostream>
#include <random>
using namespace std;

int main()
{
    cout << "Guessing a number game in C++!" << endl;
    cout << "------------------------------" << endl;
    srand(time(nullptr));                // seed the random number generator
    int random_number = rand() % 10 + 1; // generates a pseudo-random number
    cout << "Guess a number: ";
    int user_guess;
    cin >> user_guess;
    if (user_guess < random_number)
    {
        cout << "Too Low!" << endl;
    }
    else if (user_guess > random_number)
    {
        cout << "Too High!" << endl;
    }
    else
    {
        cout << "Correct! You guessed the number!" << endl;
    }
}