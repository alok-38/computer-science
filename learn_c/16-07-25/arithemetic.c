#include <stdio.h>

int main(void)
{
    int x, y, z;
    printf("Enter the values of x, y and z followed by a new line:\n");

    if (scanf("%i %i %i", &x, &y, &z) != 3)
    {
        printf("Invalid input! Please enter three integers.\n");
        return 1;
    }

    printf("%i + %i + %i = %i\n", x, y, z, x + y + z);
    printf("%i - %i - %i = %i\n", x, y, z, x - y - z);
    printf("x++ = %i\n", ++x);
    // outputs the value of y before incrementing
    printf("y++ = %i\n", y++);
    printf("y++ = %i\n", y++);
    return 0;
}
