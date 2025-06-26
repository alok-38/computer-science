#include <iostream>
#include <vector>
using namespace std;

int linear_search(int target);

int main()
{
    int target;
    cout << "Enter the number to search for: ";
    cin >> target;

    int result = linear_search(target);

    if (result != -1)
        cout << "Found at index " << result << endl;
    else
        cout << "Not found" << endl;

    return 0;
}

int linear_search(int target)
{
    vector<int> myList;
    int n, element;

    cout << "How many numbers will you enter? ";
    cin >> n;

    cout << "Start filling in the list:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        myList.push_back(element);
    }

    for (int i = 0; i < myList.size(); i++)
    {
        if (myList[i] == target)
            return i; // Return index immediately when found
    }

    return -1; // Not found
}

