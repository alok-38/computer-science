#include <stdio.h>

const char *simple();

int main()
{
    printf("\n");
    printf("%s", simple());
}

const char *simple()
{
    return ("Programming in C!\n");
}