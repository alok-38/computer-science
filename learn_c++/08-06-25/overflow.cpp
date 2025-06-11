#include <iostream>
using namespace std;

int main() {

    // Max value for unsigned char
    unsigned char x = 255;
    x++;
    // Output: 0 (Overflow wraps around)
    cout << (int)x << endl;
    return 0;
}

