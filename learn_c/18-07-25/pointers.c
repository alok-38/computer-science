#include <stdio.h>

int main(void)
{
    // declaring a pointer
    int *address;
    int variabe = 10;
    address = &variabe;
    printf("Address: %p\n", address);
    // dereferencing
    printf("Pointer dereferenced: %d\n", *address);
    // change the value of variabe using the pointer
    *address = 20;
    printf("After: variable = %d\n", variabe);
}