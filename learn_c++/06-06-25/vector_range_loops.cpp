#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> fruits = {"apple", "banana", "cherry"};
    for (const string &fruit : fruits)
    {
        cout << fruit << endl;
    }
}
