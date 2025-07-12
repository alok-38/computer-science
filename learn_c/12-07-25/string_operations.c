#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "Hello";
    char str2[] = "World";

    strcat(str1, str2); // str1 becomes "HelloWorld"
    printf("Combined string: %s\n", str1);

    printf("Length: %zu\n", strlen(str1));
    printf("Comparison: %d\n", strcmp(str1, "HelloWorld")); // 0 if equal

    // Inputting Strings
    char name[50];
    // scanf("%s", name);
    // safer, reads full line
    fgets(name, 50, stdin);
    printf("%s\n", name);

    return 0;
}
