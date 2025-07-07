#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int arr[] = {5, 3, 9, 1, 6, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int min1 = numeric_limits<int>::max();
    int min2 = numeric_limits<int>::max();

    for (int value : arr)
    {
        if (value < min1)
        {
            min2 = min1;
            min1 = value;
        }
        else if (value > min1 && value < min2)
        {
            min2 = value;
        }
    }

    if (min2 == numeric_limits<int>::max())
    {
        cout << "No second smallest value" << endl;
    }
    else
    {
        cout << "Second smallest: " << min2 << endl;
    }

    return 0;
}
