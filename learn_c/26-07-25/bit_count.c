#include <stdio.h>

int bit_count(unsigned int x);

int main(void)
{
    unsigned int num = 29;
    printf("Number of set bits in %u is %d\n", num, bit_count(num));
    return 0;
}

int bit_count(unsigned int x)
{
    int count = 0;
    while (x) {
        count += x & 1;
        x >>= 1;
    }
    return count;
}
