#include <iostream>
using namespace std;

void greet() {
    cout << "Hello from a function!" << endl;
}

int add(int a, int b) {
    return a + b;
}

int main() {
    greet(); // function call
    int result = add(5, 3);
    cout << "Sum is " << result << endl;
    return 0;
}

