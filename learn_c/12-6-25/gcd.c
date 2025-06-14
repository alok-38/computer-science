#include <stdio.h>

int main()
{
    printf("Type in two non-negative integers\n");
    int u, v, temp;
    scanf("%i %i", &u, &v);

    if (u < 0 || v < 0)
    {
        printf("Only non-negative integers are allowed.\n");
        return 1;
    }

    while (v != 0)
    {
        temp = u % v;
        u = v;
        v = temp;
    }

    printf("GCD = %i\n", u);
    return 0;
}
