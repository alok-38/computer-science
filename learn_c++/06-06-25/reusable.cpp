#include <iostream>

using namespace std;

bool isEven(int number);

int main() {
    int number = 0;
    cout << "Enter an integer: ";
    cin >> number;

    return 0;
}

bool isEven(int number) {
    return number % 2 == 0;
}
