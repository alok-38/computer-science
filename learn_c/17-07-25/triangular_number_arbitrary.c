#include <stdio.h>

int main(void)
{
    int n, number, triangularNumber, counter;
    int howMany;

    printf("How many triangular numbers do you want? ");
    scanf("%i", &howMany); // Get this value once before the loop

    for (counter = 1; counter <= howMany; ++counter)
    {
        printf("What triangular number do you want? ");
        scanf("%i", &number);

        triangularNumber = 0;
        for (n = 1; n <= number; ++n)
            triangularNumber += n;

        printf("Triangular number %i is %i\n\n", number, triangularNumber);
    }

    return 0;
}
