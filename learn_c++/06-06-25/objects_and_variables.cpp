#include <iostream>
using namespace std;

int main()
{
    int age = 25;
    float height = 5.9;
    char grade = 'A';
    bool isPassed = true;

    /* An object is an instance of a class.
    A class defines the blueprint (data + functions), and an object is a concrete instance that uses that blueprint.*/
    // Defining a class
    class Car
    {
    public:
        string brand;
        int year;

        void start()
        {
            cout << "Car is starting..." << endl;
        }
    };
    // Creating Objects:
    Car myCar; // Object created
    myCar.brand = "Toyota";
    myCar.year = 2022;
    myCar.start();
}
