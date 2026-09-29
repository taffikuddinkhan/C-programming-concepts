#include <stdio.h>

void primeFactorization(int n)
{
    int i;

    for(i = 2; i <= n; i++)
    {
        while(n % i == 0)
        {
            printf("%d ", i);
            n = n / i;
        }
    }
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime factors: ");
    primeFactorization(n);

    return 0;
}