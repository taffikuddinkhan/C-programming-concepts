#include <stdio.h>

int findLargest(int a[3][3])
{
    int i, j;
    int largest = a[0][0];

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(a[i][j] > largest)
            {
                largest = a[i][j];
            }
        }
    }

    return largest;
}

int main()
{
    int a[3][3];
    int i, j, largest;

    printf("Enter 9 elements:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    largest = findLargest(a);

    printf("Largest element = %d", largest);

    return 0;
}