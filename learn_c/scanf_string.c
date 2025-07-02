#include <stdio.h>

int main()
{
    char str[100];
    // Reads a string until the first whitespace (space, tab, newline).
    scanf("%s", str);
    printf("My string: %s\n", str);
}
