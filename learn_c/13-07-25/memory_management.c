#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // allocated on heap
    int *data = malloc(100 * sizeof(int));
    // ...lets forget to free(data);
    printf("%p\n", data);
}
