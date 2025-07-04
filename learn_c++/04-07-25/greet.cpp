#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "Name: ";
    // cin >> name;
    getline(cin, name); // Reads full line, including spaces
    cout << "Hello " << name << endl;
}
