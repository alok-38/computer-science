#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "How many numbers? ";
    cin >> n;

    vector<int> numbers(n);
    cout << "Enter " << n << " numbers: ";

    //  lkeep accepting into numbers
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    cout << "You entered: ";
    // loop though them and output
    for (int num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}