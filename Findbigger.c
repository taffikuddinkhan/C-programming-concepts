#include <stdio.h>
int main(){
    int a ;
    int b ;
    printf("Enter the first value");
    scanf("%d",&a);
    printf("Enter the second value");
    scanf("%d",&b);

    a>b ? printf("a is big ") : printf("B is big");
    return 0;
}

