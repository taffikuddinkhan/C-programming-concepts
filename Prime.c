#include <stdio.h>

int main(){
    int num;
    int count = 0;
    printf("Enter the number : ");
    scanf("%d",&num);

    if(num == 2){
        printf("Prime");
        return 0;
    }

    for(int i=2;i<num;i++){
        
        if(num%i==0){
            count++;
        }
    }

    if(count == 0){
        printf("prime");
    }else{
        printf("not prime");
    }

    return 0;
}
