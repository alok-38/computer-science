#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[1000];
    printf("Enter multiple lines (Ctrl+D to end input on Unix/Linux/macOS or Ctrl+Z on Windows):\n");

    // Read multiple lines into str
    int totalLength = 0;
    while (fgets(str + totalLength, sizeof(str) - totalLength, stdin)) {
        totalLength = strlen(str);
    }

    // Remove trailing newline if present
    if (totalLength > 0 && str[totalLength - 1] == '\n') {
        str[totalLength - 1] = '\0';
    }

    printf("\nYou entered:\n%s\n", str);

}

