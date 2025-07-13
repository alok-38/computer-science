#include <stdio.h>

int main(void)
{
    int a = 5, b = 10;

    if (a > 0 && b > 0)
    {
        printf("Both %i and %i are positive\n", a, b);
    }
    if (a == 5 || b == 5)
    {
        printf("Atleast one is fivie\n");
    }
    if (!(a == b))
    {
        printf("They are unequal\n");
    }
}
