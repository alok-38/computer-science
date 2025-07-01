#include <iostream>
using namespace std;

int main()
{
    int number;
    int sum = 0;
    int count = 0;

    cout << "Enter numbers (non-number to stop):" << endl;
    while (cin >> number)
    {
        sum += number;
        count++;
    }

    if (count > 0)
    {
        double average = static_cast<double>(sum) / count;
        cout << "Average: " << average << endl;
    }
    else
    {
        cout << "No valid numbers were entered." << endl;
    }

    if (cin.fail())
    {
        cout << "Invalid input detected. Program stopped." << endl;
    }

    return 0;
}
