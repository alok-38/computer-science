#include <iostream>

using namespace std;

int main()
{
    int x = 50;
    int &reference_to_x = x;

    cout << x << endl;
    cout << reference_to_x << endl;
}
