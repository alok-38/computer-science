#include <iostream>
using namespace std;

// Function prototype
int max_of_four(int a, int b, int c, int d);

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << max_of_four(a, b, c, d) << endl;

    return 0;
}

int max_of_four(int a, int b, int c, int d)
{
    int maximum = a;

    if (b > maximum)
        maximum = b;
    if (c > maximum)
        maximum = c;
    if (d > maximum)
        maximum = d;

    return maximum;
}