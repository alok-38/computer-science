#include <stdio.h>
#include <string.h>

int main()
{
    char *str = "ABCDEFG";
    char *sub = strstr(str, "C");

    if (sub != NULL)
    {
        printf("Found substring: %s\n", sub);
    }
    else
    {
        printf("Substring not found.\n");
    }

    return 0;
}
