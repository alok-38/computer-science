#include <stdio.h>
#include <string.h>
#include <time.h>

int main()
{
    char name[100];
    time_t now = time(NULL);
    struct tm *t = localtime(&now);
    int hour = t->tm_hour;
    printf("Time: %i\n", hour);

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    if (hour < 12)
        printf("Good morning, %s!\n", name);
    else if (hour < 18)
        printf("Good afternoon, %s!\n", name);
    else
        printf("Good evening, %s!\n", name);

    return 0;
}
