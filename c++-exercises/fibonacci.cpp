#include <iostream>
using namespace std;

int main()
{
    cout << "How many Fibonacci numbers do you want ";
    int howMany;
    cin >> howMany;
    int fib1 = 0;
    int fib2 = 1;
    for (int count = 0; count < howMany; count++)
    {
        cout << fib1 << endl;
        // Next fib is the sum of the previous two
        int next = fib1 + fib2;
        // Update the two variables
        fib1 = fib2;
        fib2 = next;
    }
}
