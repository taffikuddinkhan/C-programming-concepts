#include <stdio.h>
int max_diff(){

    char arr[5];
    int diff = 0;
    int max_diff = 0;


    printf("Enter 5 character :-");
    char element;

    for(int i = 0 ; i<5 ; i++){
        scanf(" %c",&element);
        arr[i] = element;
    }


    for(int i = 0 ; i<4 ; i++){

        diff = arr[i] - arr[i+1];
        if(diff < 0){
            diff = diff*-1;
        }

        if(diff > max_diff){
            max_diff = diff;
        }


    }

    return max_diff;
    
}

int main(){

    int max = max_diff();
    printf("max diff : %d",max);

    return 0;
}