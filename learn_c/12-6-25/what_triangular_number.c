#include <stdio.h>

int main()
{
    while (1)
    {
        int which_triangular_number = 0;
        printf("Enter a number to get its triangular number (0 or negative to quit): ");
        scanf("%i", &which_triangular_number);

        if (which_triangular_number <= 0)
        {
            printf("Exiting the program.\n");
            break;
        }

        int triangular_number = 0;

        // Calculate triangular number
        for (int n = 1; n <= which_triangular_number; n++)
        {
            triangular_number += n;
        }

        printf("Triangular number %i is %i\n", which_triangular_number, triangular_number);
    }

    return 0;
}
