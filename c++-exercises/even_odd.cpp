#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    while (!(cin >> number)) // Input validation
    {
        cin.clear();            // Clear the error flag
        cin.ignore(1000, '\n'); // Discard invalid input
        cout << "Invalid input. Please enter a valid integer: ";
    }
    if (number % 2 == 0)
    {
        cout << "It's even!" << endl;
    }
    else
    {
        cout << "It's odd!" << endl;
    }
}