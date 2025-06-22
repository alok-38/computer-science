#include <iostream>
using namespace std;

int main()
{
    // Variable declarations with different basic data types
    int age = 25;
    float height = 5.9f;
    double weight = 72.5;
    unsigned long long population = 789934592;
    unsigned int score = 4294967295;
    char grade = 'A';
    bool passed = true;

    // Display variable values
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Weight: " << weight << endl;
    cout << "World Population (approx): " << population << endl;
    cout << "Score (unsigned int): " << score << endl;
    cout << "Grade: " << grade << endl;
    cout << boolalpha; // Print bools as true/false instead of 1/0
    cout << "Passed: " << passed << endl;

    cout << "\n-----------------------" << endl;

    // Display memory sizes of each data type
    cout << "Size of int: " << sizeof(int) << " bytes\n";
    cout << "Size of float: " << sizeof(float) << " bytes\n";
    cout << "Size of double: " << sizeof(double) << " bytes\n";
    cout << "Size of long: " << sizeof(long) << " bytes\n";
    cout << "Size of unsigned int: " << sizeof(unsigned int) << " bytes\n";
    cout << "Size of char: " << sizeof(char) << " byte\n";
    cout << "Size of bool: " << sizeof(bool) << " byte\n";

    return 0;
}
