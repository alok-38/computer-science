#include <stdio.h>

int main()
{
    // Definition of a String in C
    char str[] = "Hello";
    str[0] = 'Y';
    printf("%s\n", str);
    // Pointer to a string literal
    const char *ptr_to_str = "Hello";
}