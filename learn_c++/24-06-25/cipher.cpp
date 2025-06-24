#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;

    cout << "Enter a word to cipher into ASCII: ";
    cin >> input;

    cout << "\nCiphered output (ASCII values):\n";

    for (char c : input)
    {
        cout << (int)c << " ";
    }

    cout << "\n\nDone!\n";
    return 0;
}
