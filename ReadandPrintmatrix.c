#include <stdio.h>

void readMatrix(int a[3][3])
{
    int i, j;

    printf("Enter 9 elements:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void printMatrix(int a[3][3])
{
    int i, j;

    printf("The Matrix is:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }
}

int main()
{
    int a[3][3];

    readMatrix(a);
    printMatrix(a);

    return 0;
}
