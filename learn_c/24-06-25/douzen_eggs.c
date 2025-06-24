#include <stdio.h>

int main()
{
    printf("The number of eggs: ");
    int eggs;
    if (scanf("%i", &eggs) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    double dozen = (double)eggs / 12;
    printf("You have %.2f dozen eggs\n", dozen);

    return 0;
}
