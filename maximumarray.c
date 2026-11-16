#include <stdio.h>
int max_sum(){

    int arr[5];
    int *pointer = arr;
    int sum = 0 ;
    int max = 0;


    printf("Enter 5 element :-");
    int element;

    for(int i = 0 ; i<5 ; i++){
        scanf("%d",&element);
        arr[i] = element;
    }


    for(int i = 0 ; i<4 ; i++){
        
        sum = *(pointer + i) + *(pointer + i + 1);
        if(sum > max){
            max = sum;
        }

    }

    return max;

    
}

int main(){

    int max = max_sum();
    printf("max sum : %d",max);

    return 0;
}