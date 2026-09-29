#include <stdio.h>

void searchElement()
{
    int arr[10], i, search;
    int found = 0;

    printf("Enter 10 elements:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    for(i = 0; i < 10; i++)
    {
        if(arr[i] == search)
        {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Element not found\n");
    }
}

int main()
{
    searchElement();

    return 0;
}