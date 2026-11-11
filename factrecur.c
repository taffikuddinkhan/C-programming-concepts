#include <stdio.h>

int factorial(int number){

    if(number == 0 || number == 1){
        return 1;
    }

    return number * factorial(number-1);
    

}
int main(){
    int number;
    printf("Enter the number to count factorial : - ");
    scanf("%d",&number);
    printf("%d",factorial(number));
    
    return 0;
}