#include <stdio.h>

int calculateTriangularNumber(int n);
void printTriangularNumbers(int howmany);

int main(void)
{
    int whichTriangularNumber, howmany;

    // Ask for a specific triangular number
    printf("Which triangular number you want? ");
    scanf("%i", &whichTriangularNumber);
    printf("The triangular number #%i is: %i\n", whichTriangularNumber, calculateTriangularNumber(whichTriangularNumber));

    // Ask how many triangular numbers to print
    printf("How many triangular numbers do you want? ");
    scanf("%i", &howmany);
    printf("Here are the first %i triangular numbers:\n", howmany);
    printf("------------------------------\n");
    printTriangularNumbers(howmany);

    return 0;
}

int calculateTriangularNumber(int n)
{
    return n * (n + 1) / 2; // More efficient than loop
}

void printTriangularNumbers(int howmany)
{
    for (int i = 1; i <= howmany; i++)
    {
        printf("#%i:\t%i\n", i, calculateTriangularNumber(i));
    }
}
