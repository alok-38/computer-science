#include <iostream>
using namespace std;

int main()
{
    cout << "Sum of all elements in an array (enter -1 to stop):" << endl;
    cout << "--------------------------------------------------" << endl;

    int sum = 0;
    int input;
    int count = 0;

    while (true)
    {
        cout << "Enter a number (-1 to stop): ";
        cin >> input;

        if (input == -1)
            break;

        sum += input;
        count++;
    }

    cout << "Sum = " << sum << endl;

    if (count > 0)
    {
        double average = static_cast<double>(sum) / count;
        cout << "Average = " << average << endl;
    }
    else
    {
        cout << "No numbers were entered." << endl;
    }

    return 0;
}
