#include <stdio.h>

int main(void)
{
    int k = 2;
    int *pointer = &k;
    printf("The address of k is %p\n", (void *)&k);
    // dereferencing
    printf("The de-referenced value of k is %i\n", *pointer);
    // You could also print the address directly
    printf("The address stored in 'pointer' is %p\n", (void *)pointer);
}