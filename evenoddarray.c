#include <stdio.h>

void evenOdd()
{
    int arr[10], i;
    int even = 0, odd = 0;

    printf("Enter 10 elements:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 10; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Even elements = %d\n", even);
    printf("Odd elements = %d\n", odd);
}

int main()
{
    evenOdd();

    return 0;
}