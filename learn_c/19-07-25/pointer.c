#include <stdio.h>

int main(void)
{
    int k = 2;
    int *pointer = &k;
    printf("The address of k is %p\n", pointer);
}