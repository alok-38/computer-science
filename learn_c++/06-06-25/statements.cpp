#include <iostream>
using namespace std;

// Declaration Statements
int x = 5;
// More accurate PI
const double pi = 3.141592653589793;

// Class Definition
class MyClass
{
    // class members can be added here
public:
    void greet()
    {
        cout << "Hello from MyClass!" << endl;
    };
};

int main()
{
    cout << "Value of x: " << x << endl;
    cout << "Area of circle with radius " << pi * x * x << endl;
    MyClass obj; // Creating an object of MyClass
    // Call it
    obj.greet();
    return 0;
}