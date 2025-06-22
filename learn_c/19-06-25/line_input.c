#include <stdio.h>
#include <string.h>

int main()
{
    char line[200];

    printf("Enter line\n");
    fgets(line, sizeof(line), stdin);

    // Remove the newline character added by fgets
    line[strcspn(line, "\n")] = '\0';

    printf("Line: %s\n", line);

    return 0;
}
