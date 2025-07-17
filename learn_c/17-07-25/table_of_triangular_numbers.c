#include <stdio.h>

int main(void)
{
    printf("Table of every fifth triangular number\n");
    printf("--------------------------------------\n");
    for (int n = 5; n <= 50; n++)
    {
        int triangularNumber = n * (n + 1) / 2;
        printf("%i\t%i\n", n, triangularNumber);
    }
}
