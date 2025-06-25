#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    cout << "Enter a string: ";
    string my_string;
    getline(cin, my_string);

    // Convert to lowercase
    transform(my_string.begin(), my_string.end(), my_string.begin(),
              [](unsigned char c) { return tolower(c); });

    // Remove non-alphabetic characters
    my_string.erase(remove_if(my_string.begin(), my_string.end(),
                [](unsigned char c) { return !isalpha(c); }),
            my_string.end());

    // Create a reversed copy
    string reversed_str = my_string;
    reverse(reversed_str.begin(), reversed_str.end());

    // Check if palindrome
    if (my_string == reversed_str)
        cout << "It's a palindrome." << endl;
    else
        cout << "It's not a palindrome." << endl;

    return 0;
}

