#include <iostream>
#include <iomanip> // for std::setprecision

using namespace std;

int main()
{
    float f = 1.0f / 3.0f;
    double d = 1.0 / 3.0;

    cout << fixed << setprecision(10); // Show 10 decimal places

    cout << "Float result (1/3): " << f << endl;
    cout << "Double result (1/3): " << d << endl;

    // Adding 0.1 multiple times
    float sum_f = 0.0f;
    for (int i = 0; i < 10; i++)
    {
        sum_f += 0.1f;
    }

    double sum_d = 0.0;
    for (int i = 0; i < 10; i++)
    {
        sum_d += 0.1;
    }

    cout << "\nSum of 0.1 added 10 times (float):  " << sum_f << endl;
    cout << "Sum of 0.1 added 10 times (double): " << sum_d << endl;

    return 0;
}
