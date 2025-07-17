#include <stdio.h>

int main(void)
{
    printf("Table of every fifth triangular number\n");
    printf("--------------------------------------\n");
    for (int n = 5; n <= 50; n += 5)
    {
        int triangularNumber = n * (n + 1) / 2;
        printf("%i\t%i\n", n, triangularNumber);
    }
    printf("Table of squares\n");
    printf("--------------------------------------\n");
    for (int n = 1; n <= 10; n++)
    {
        int squares = n * n;
        printf("%i\t%i\n", n, squares);
    }
    int first_number = 0;
    int second_number = 1;
    int n, fibonacci;
    int terms = 10; // Total terms you want to print

    printf("Table of Fibonacci numbers\n");
    printf("--------------------------------------\n");

    // Print the first two numbers explicitly
    printf("%d\n", first_number);
    printf("%d\n", second_number);

    for (n = 3; n <= terms; n++)
    {
        fibonacci = first_number + second_number;
        printf("%d\n", fibonacci);
        first_number = second_number;
        second_number = fibonacci;
    }
}
