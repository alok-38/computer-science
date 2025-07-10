#include <iostream>
#include <string>

using namespace std;

string reverseString(string myString);

int main()
{
    string myString;
    cout << "Enter a word: ";
    cin >> myString;

    string reversed = reverseString(myString);
    cout << "Reversed word: " << reversed << endl;

    return 0;
}

string reverseString(string myString)
{
    if (myString.length() == 0)
    {
        return "";
    }
    return reverseString(myString.substr(1)) + myString[0];
}
