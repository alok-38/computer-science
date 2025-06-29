#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // empty vector of integers
    vector<int> v;
    // add elements
    v.push_back(10);
    v.push_back(20);
    // loop through them
    for (int i : v)
    {
        cout << i << " ";
    }
    // Initialize a vector of five elements
    vector<int> v2(5);
    // Iterate over them
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << endl;
    }
    cout << endl;
    for (auto iterat = v.begin(); iterat != v.end(); ++iterat)
    {
        cout << *iterat << " ";
    }
}
