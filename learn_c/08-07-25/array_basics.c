#include <stdio.h>

int main()
{
    int a[5];             // declaration
    int b[5] = {1, 2, 3}; // partial initialization
    int c[] = {4, 5, 6};  // size inferred

    for (int i = 0; i < 5; i++)
    {
        printf("%i\n", b[i]);
    }
    for (int j = 0; j < 3; j++)
    {
        printf("%i\n", c[j]);
    }
    int mat[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("mat[%d][%d] = %d\n", i, j, mat[i][j]);
        }
    }
}
