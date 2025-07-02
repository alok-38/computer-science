#include <windows.h>
#include <stdio.h>

// Define gcd function outside main
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    int width = GetSystemMetrics(SM_CXSCREEN);
    int height = GetSystemMetrics(SM_CYSCREEN);

    printf("Screen resolution: %dx%d\n", width, height);

    int divisor = gcd(width, height);
    printf("Aspect ratio: %d:%d\n", width / divisor, height / divisor);

    return 0;
}
