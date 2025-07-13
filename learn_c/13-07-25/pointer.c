#include <stdio.h>

void printFirst(int *ptr);

int main(void)
{
    int x = 10;
    int *p = &x;
    printf("The address of x is %p\n", p);
    // Array declaration
    int arr[3] = {10, 20, 30};

    printf("%zu\n", sizeof(arr)); // 12
    printf("%zu\n", sizeof(p));   // 8 (on 64-bit)

    printFirst(arr);
}

void printFirst(int *ptr)
{
    printf("%d\n", *ptr);
}