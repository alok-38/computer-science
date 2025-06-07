#include <iostream>
#include <limits>  // For numeric_limits

using namespace std;

int main() {
    int age = 0;

    cout << "How old are you? ";

    while (true) {
        cin >> age;

        // Check if input failed (non-integer input)
        if (cin.fail()) {
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid input. Please enter a valid number: ";
        }

        // Check if age is negative
        else if (age < 0) {
            cout << "Age can't be negative. Please enter a non-negative number: ";
        }
        else {
            break; // Valid input received
        }
    }
}

