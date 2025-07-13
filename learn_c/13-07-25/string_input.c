#include <stdio.h>

int main(void)
{
    char name[100];
    printf("Enter a name\n");
    fgets(name, sizeof(name), stdin);
    // Strip trailing newline if present
    name[strcspn(name, "\n")] = 0;
    printf("Hello %s\n", name);
}
