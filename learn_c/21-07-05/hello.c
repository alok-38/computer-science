#include <stdio.h>

int main(void)
{
    char name[100];
    printf("May I know your name please? ");
    scanf("%s", name);
    printf("Hello, %s\n", name);
    // Clear the input buffer after scanf
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
    printf("Your fullname? ");
    char full_name[100];
    fgets(full_name, sizeof(full_name), stdin);
    printf("Hello, %s", full_name);
    return 0;
}
