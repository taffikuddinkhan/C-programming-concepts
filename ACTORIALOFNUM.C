#include <stdio.h>
void factorial(int num){

    if(num < 0){
        printf("enter a positive value ");
        return;
    }

    int fact = 1;
    int i = 1;
    
    while(i<=num){
        fact = fact * i;
        i++;
    }

    printf("factorial is = %d",fact);
}
int main(){

    factorial(-1536523);
    return 0;
}