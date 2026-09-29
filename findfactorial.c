#include <stdio.h>

void factorial(int val){

    int factor = 1;
    for(int i = 1 ; i<=val ; i++){
        factor = factor*i;
    }

    printf("%d",factor);
}
int main(){

    int num;
    printf("Enter the value :");
    scanf("%d",&num);
    factorial(num);


    return 0;
}