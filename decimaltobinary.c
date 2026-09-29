#include <stdio.h>

void decimalToBinary(int val)
{
    int reminder;
    int binary = 0;
    int place = 1;

    while(val > 0)
    {
        reminder = val % 2;
        binary = binary + reminder * place;
        place = place * 10;
        val = val / 2;
    }

    printf("%d", binary);
}

int main()
{
    int number;

    printf("Enter the number: ");
    scanf("%d", &number);

    printf("Binary: ");
    decimalToBinary(number);

    return 0;
}