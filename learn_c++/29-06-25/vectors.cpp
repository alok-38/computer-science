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
}
