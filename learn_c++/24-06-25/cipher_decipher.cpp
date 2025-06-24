#include <iostream>
#include <string>
using namespace std;

int main()
{
    string line, input;

    cout << "Enter 5 characters (can include spaces): ";
    getline(cin, line); // read entire line including spaces

    for (char ch : line)
    {
        if (ch != ' ')
        {
            input += ch;
            // index of the last added character is input.length() - 1
            cout << "Character " << input.length() << ": " << input.back() << endl;
        }
    }

    return 0;
}
