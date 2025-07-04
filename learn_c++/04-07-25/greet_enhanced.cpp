#include <iostream>
#include <string>
#include <cctype> // for isalpha
using namespace std;

// Helper function to check if the name contains only letters and spaces
// Prototype
bool isValidName(const string &name);

int main()
{
    string name;
    cout << "=== Welcome Program ===" << endl;

    while (true)
    {
        cout << "Enter your name: ";
        getline(cin, name);

        if (isValidName(name))
        {
            break;
        }
        else
        {
            cout << "Invalid name. Please enter letters only (no numbers or special characters)." << endl;
        }
    }
    // Format greeting
    cout << "\n========================" << endl;
    cout << "   Hello, " << name << "!" << endl;
    cout << "   Nice to meet you. 😊" << endl;
    cout << "========================" << endl;
}

bool isValidName(const string &name)
{
    for (char c : name)
    {
        if (!isalpha(c) && c != ' ')
        {
            return false;
        }
        return !name.empty();
    }
}