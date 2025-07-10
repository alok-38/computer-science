#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> toBeFilled;
    // Add items
    toBeFilled.push_back(10);
    toBeFilled.push_back(20);
    // Output the contents
    for (int start = 0; start < toBeFilled.size(); start++)
    {
        cout << toBeFilled[start] << " ";
    }
}
