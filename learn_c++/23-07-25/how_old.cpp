#include <iostream>
using namespace std;

int main() {
    cout << "May I know your name? ";
    string name;
    cin >> name;
    cout << "How old are you? ";
    int age;
    cin >> age;
    cout << "Hey " << name << " You will turn " << age + 1  << " this september" << endl;
}

