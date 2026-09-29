#include <stdio.h>

void minMax()
{
    int arr[10], i;
    int min, max;

    printf("Enter 10 elements:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    max = arr[0];

    for(i = 1; i < 10; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }

        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);
}

int main()
{
    minMax();

    return 0;
}