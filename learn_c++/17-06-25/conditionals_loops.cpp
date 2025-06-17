#include <iostream>
using namespace std;

int sum_up_to(int n) {
    int total = 0;
    for (int i = 1; i <= n; ++i) {
        total += i;
    }
    return total;
}

int main() {
    int number;

    cout << "Enter a positive number: ";
    cin >> number;

    if (number < 1) {
        cout << "Please enter a number greater than 0." << endl;
        return 1; // exit with error
    }

    int result = sum_up_to(number);
    cout << "Sum from 1 to " << number << " is " << result << endl;

    return 0;
}

