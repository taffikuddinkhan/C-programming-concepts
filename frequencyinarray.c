#include <stdio.h>

void frequency()
{
    int arr[10], i, j, count;

    printf("Enter 10 elements:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 10; i++)
    {
        count = 0;

        for(j = 0; j < 10; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        printf("%d occurs %d times\n", arr[i], count);
    }
}

int main()
{
    frequency();

    return 0;
}