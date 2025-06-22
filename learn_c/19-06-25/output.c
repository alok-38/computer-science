#include <stdio.h>

int main()
{
    const int constant = 42;
    const char* name = "Sarah";
    printf("Hello world\n");
    printf("Answer %d\n", constant);
    printf("Name %s\n", name);
    float x = 3.5;
    int i = 100;
    printf("x %.2f i %i\n", x, i);
}
