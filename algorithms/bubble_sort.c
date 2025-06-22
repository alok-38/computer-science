#include <stdio.h>

int main()
{
    int n, list[10];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 2 - i; j++)
        {
            if (list[j] > list[j + 1])
                list[j + 1] = list[j];
        }
    }
}

