#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    cout << "Enter a string: ";
    string my_string;
    cin >> my_string;
    reverse(my_string.begin(), my_string.end());
    cout << "Reversed string: " << my_string << endl;
}

