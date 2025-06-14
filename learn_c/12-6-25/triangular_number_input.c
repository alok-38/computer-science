#include <stdio.h>

int main()
{
    int triangular_number = 0;

    printf("Which triangular number do you want? ");
    int which_triangular_number = 0;
    scanf("%i", &which_triangular_number);

    for (int n = 1; n <= which_triangular_number; n++)
    {
        triangular_number += n;
    }

    printf("Triangular number %i is %i\n", which_triangular_number, triangular_number);
}