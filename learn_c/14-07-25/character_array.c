#include <stdio.h>

int main(void)
{
    char x[11]; // 10 characters + 1 for null terminator

    for (int i = 0; i < 10; i++)
    {
        x[i] = '*';
        x[i + 1] = '\0'; // null-terminate the string
        printf("%s\n", x);
    }

    return 0;
}
