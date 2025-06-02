#include <stdio.h>

int main() {
    int arr[] = {3, 7, 9, 14, 25};
    int target = 14;
    int i = 0;

search:
    if (i >= 5) goto not_found;
    if (arr[i] == target) goto found;
    i++;
    goto search;

found:
    printf("Found at index %d\n", i);
    goto end;

not_found:
    printf("Not found\n");

end:
    return 0;
}

