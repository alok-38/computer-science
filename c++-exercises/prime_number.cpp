#include <iostream>
#include <cmath> // Needed for sqrt()

using namespace std;

bool isPrime(int number); // Fix: added parameter type

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Call isPrime and print result
    if (isPrime(number))
    {
        cout << number << " is a prime number." << endl;
    }
    else
    {
        cout << number << " is a composite number." << endl;
    }

    return 0;
}

bool isPrime(int number) // Fix: added parameter type
{
    if (number <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}
