#include <stdio.h>

void printFibonacci(int n);

int main()
{
    int terms;
    printf("Enter number of terms: ");
    scanf("%d", &terms);
    if (terms < 1)
    {
        printf("Please enter a positive number.\n");
    }
    else if (terms == 1)
    {
        printf("Fibonacci Series: 0\n");
    }
    else {
        printFibonacci(terms);
    }
}

void printFibonacci(int n)
{
    int t1 = 0, t2 = 1, nextTerm;

    printf("Fibonacci Series: %d %d ", t1, t2);

    for (int i = 3; i <= n; i++)
    {
        nextTerm = t1 + t2;
        printf("%d ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

