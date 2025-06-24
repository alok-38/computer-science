#include <iostream>
// For limits of float, double, long double
#include <cfloat>
using namespace std;

int main()
{
    cout << "Size of float: " << sizeof(float) << " bytes\n";
    cout << "Size of double: " << sizeof(double) << " bytes\n";
    cout << "Size of long double: " << sizeof(long double) << " bytes\n\n";

    cout << "Float range: " << FLT_MIN << " to " << FLT_MAX << endl;
    cout << "Double range: " << DBL_MIN << " to " << DBL_MAX << endl;
    cout << "Long double range: " << LDBL_MIN << " to " << LDBL_MAX << endl;
}