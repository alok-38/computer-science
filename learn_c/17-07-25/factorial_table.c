#include <stdio.h>

int factorial(int n);

int main(void)
{
    printf("Table of factorial\n");
    printf("------------------\n");

    for (int count = 1; count <= 10; count++)
    {
        printf("%i\t%i\n", count, factorial(count));
    }
}

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
    {
        return n * factorial(n - 1);
    }
}