#include <stdio.h>

void transpose(int a[3][3], int t[3][3])
{
    int i, j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            t[j][i] = a[i][j];
        }
    }
}

int main()
{
    int a[3][3], t[3][3];
    int i, j;

    printf("Enter 9 elements:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    transpose(a, t);

    printf("Transpose of matrix:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", t[i][j]);
        }

        printf("\n");
    }

    return 0;
}