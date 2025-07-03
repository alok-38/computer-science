#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    if (n < 2)
        return 0; // 0 and 1 are not prime numbers

    for (int i = 2; i <= (int)sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

int main()
{
    int num = 17;
    if (isPrime(num))
        printf("%d is prime\n", num);
    else
        printf("%d is not prime\n", num);

    return 0;
}
