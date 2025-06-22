#include <stdio.h>

int main()
{
    printf("\n");
    printf("TABLE OF TRIANGULAR NUMBERS\n");
    printf("n\t\tSum from 1 to n\n");
    printf("---\t\t----------------\n");

    int triangular_number;

    for (int n = 1; n <= 10; n++)
    {
        triangular_number = n * (n + 1) / 2;
        printf("%i\t\t%i\n", n, triangular_number);
    }

    return 0;
}
