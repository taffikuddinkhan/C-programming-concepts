#include <stdio.h>

int main()
{
    int a, b, ch;
    char ans;

    do
    {
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");

        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        printf("Enter first number: ");
        scanf("%d", &a);

        printf("Enter second number: ");
        scanf("%d", &b);

        switch(ch)
        {
            case 1:
                printf("Addition = %d", a + b);
                break;

            case 2:
                printf("Subtraction = %d", a - b);
                break;

            case 3:
                printf("Multiplication = %d", a * b);
                break;

            case 4:
                printf("Division = %d", a / b);
                break;

            default:
                printf("Invalid choice");
        }

        printf("\nDo you want to perform another operation ? y / n : ");
        scanf(" %c", &ans);

    } while(ans == 'y' || ans == 'Y');

    printf("Thank you");

    return 0;
}