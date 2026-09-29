#include <stdio.h>

void sumArray()
{
    int arr[10], i;
    int sum = 0;

    printf("Enter 10 elements:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
    }

    printf("Sum = %d\n", sum);
}

int main()
{
    sumArray();

    return 0;
}