#include <stdio.h>

int main(void)
{
    int i1, i2;
    int *p1, *p2;
    i1 = 5;
    p1 = &i1;
    /* i2 now holds the de-referenced value
    of p1 / 2 + 10*/
    i2 = *p1 / 2 + 10;
    p2 = p1;
    printf("i2 = %i\n", i2);
    printf("i1 = %i\n", i1);
    printf("p1 and p2 both de-referenced: %i %i\n", *p1, *p2);
}