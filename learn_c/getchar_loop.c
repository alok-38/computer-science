#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;
    char ch;

    while ((ch = getchar()) != '\n' && ch != EOF && i < 99)
    {
        str[i++] = ch;
    }
    str[i] = '\0';

    // Print the string
    printf("You entered: %s\n", str);

    return 0;
}
