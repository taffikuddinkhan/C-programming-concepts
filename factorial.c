#include <stdio.h>

int factorial(int n){
    int result;
    if(n==0){
        return 1;
    }
    else{
        result = n*factorial(n-1);
    }

    return result;
}
int main(){

    int val = factorial(4);
    printf("factorial : %d",val);
}