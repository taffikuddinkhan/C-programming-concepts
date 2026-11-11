#include <stdio.h>

int fibonacii(int number){

    if(number == 0){
        return 0;
    }
    

    if(number == 1){
        return 1;
    }
    

    return fibonacii(number-1) + fibonacii(number-2);


}
int main(){
    int number;
    printf("Enter the number to generate series : - ");
    scanf("%d",&number);
    

    for(int i = 0 ; i <number ; i++){
        printf("%d",fibonacii(i));
    }   
    
    return 0;
}
