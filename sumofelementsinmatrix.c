#include <stdio.h>

int findSum(int a[3][3])
{
    int i, j, sum = 0;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            sum = sum + a[i][j];
        }
    }

    return sum;
}

int main()
{
    int a[3][3];
    int i, j, sum;

    printf("Enter 9 elements:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    sum = findSum(a);

    printf("Sum of all elements = %d", sum);

    return 0;
}