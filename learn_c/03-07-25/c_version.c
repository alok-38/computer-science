#include <stdio.h>

int main()
{
#ifdef __STDC_VERSION__
    printf("C Standard version: %ld\n", __STDC_VERSION__);
#else
    printf("C Standard version: C89/C90 or earlier\n");
#endif
    return 0;
}
