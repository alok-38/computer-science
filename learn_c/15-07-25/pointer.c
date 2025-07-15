#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void increment(int *v)
{
    (*v)++;
}

int main()
{
    int a;
    scanf("%d", &a);
    increment(&a);
    printf("%d", a);
    return 0;
}
