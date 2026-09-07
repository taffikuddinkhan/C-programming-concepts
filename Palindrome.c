#include <stdio.h>

int main()
{
    int n, a, r, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    a = n;

    while(n != 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }

    if(a == rev)
    {
        printf("Number is palindrome");
    }
    else
    {
        printf("Number is not palindrome");
    }

    return 0;
}