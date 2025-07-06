#include <iostream>
using namespace std;

void func();

int main()
{
    func();
}

int x = 10; // global variable

void func()
{
    int x = 20; // local variable
    cout << "Local x: " << x << endl;
    cout << "Global x: " << ::x << endl; // use scope resolution
}