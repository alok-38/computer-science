#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> myList = {10, 20, 30, 40, 50};
    int target;

    cout << "Enter the number to search for: ";
    cin >> target;

    bool found = false;

    for (int i = 0; i < myList.size(); i++)
    {
        if (myList[i] == target)
        {
            cout << "Found at index " << i << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Not found" << endl;
    }

    return 0;
}

