#include <stdio.h>
int main(){
    int val = 0;
    printf("Enter the value ");
    scanf("%d",&val);
    if(val%2 == 0){
        printf("even");
    }
    else{
        printf("odd");
    }

return 0;
}