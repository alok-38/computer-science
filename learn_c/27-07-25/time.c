#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t time = 0x7FFFFFFF;
    printf("Max time_t: %s", ctime(&time));

    time += 1;
    printf("After wrap: %s", ctime(&time));
    return 0;
}

