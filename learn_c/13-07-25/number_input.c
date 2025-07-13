#include <stdio.h>

int main(void)
{
    int US_floor = 0;
    printf("Enter a U.S. floor number: ");
    scanf("%i", &US_floor);
    // Check for invalid floor numbers
    if (US_floor < 0)
    {
        printf("Invalid floor!\n");
    }
    else
    {
        printf("Corresponding European floor: %i\n", US_floor - 1);
    }
    return 0;
}
