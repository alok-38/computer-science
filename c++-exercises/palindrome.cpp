#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{
    string myString;
    cout << "Enter a word: ";
    getline(cin, myString); // Use getline to include spaces if needed

    // Create a new string to hold the lowercase, cleaned version
    string lowerCase = myString;

    // Convert to lowercase
    transform(lowerCase.begin(), lowerCase.end(), lowerCase.begin(),
              [](unsigned char c)
              { return tolower(c); });

    // Remove non-alphanumeric characters
    lowerCase.erase(remove_if(lowerCase.begin(), lowerCase.end(),
                              [](unsigned char c)
                              { return !isalnum(c); }),
                    lowerCase.end());

    // Check for palindrome using two pointers
    int left = 0;
    int right = lowerCase.length() - 1;

    bool isPalindrome = true;

    while (left < right)
    {
        if (lowerCase[left] != lowerCase[right])
        {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    // Output result
    if (isPalindrome)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}
