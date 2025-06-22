#include <iostream>
using namespace std;

void updateValue(int* ptr) {
    *ptr = *ptr + 10;
}

int main() {
    int x = 5;
    // pass the address of x
    updateValue(&x);
    cout << "Updated value: " << x << endl;
    return 0;
}
