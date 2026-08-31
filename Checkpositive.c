#include <stdio.h>
int main(){

    int val =0;
    printf("Enter the value : ");
    scanf("%d",&val);
    val<0 ? printf("Negative") : printf("positive");
    return 0;
}