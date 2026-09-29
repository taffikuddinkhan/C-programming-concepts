#include <stdio.h>

int main()
{
    int row = 6;
    int col = 9;
    int i, j;

    for(i = 1; i <= row; i++)
    {
        for(j = 1; j <= col - i; j++)
        {
            printf(" ");
        }

        for(j = 1; j <= 2 * i - 1; j++)
        {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}