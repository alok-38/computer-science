#include <iostream>
#include <string>
using namespace std;

void greet(string name = "User") {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    string name;

    cout << "Enter your name: ";
    getline(cin, name); // Allows capturing an empty line

    if (name.empty()) {
        greet(); // No input => use default "User"
    } else {
        greet(name); // Input provided => greet with name
    }

    return 0;
}

