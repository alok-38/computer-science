#include <iostream>
using namespace std;

int main() {
    string playerName;
    cout << "Enter your full name: ";
    //reads the entire line including spaces
    getline(cin, playerName);
    cout << "Welcome, " << playerName << ", to the game!" << endl;
    return 0;
}

