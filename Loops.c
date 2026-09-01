// while loop is a entry controlled loop 
// if we know the exaact number of repetation then we go for the while loop
// the minimum time of while loop execution is 0

#include <stdio.h>
int main(){

    int i = 1;
    int val = 50;

    while(i<=10){
        printf("CUTM \n");
        i++;
    }

    while(val>0){
        printf("%d\n",val);
        val--;
    }

    int start , end;
    printf("Enter the start value : ");
    scanf("%d",&start);
    printf("Enter the end value : ");
    scanf("%d",&end);
    while(end>=start){
        if(start % 2 == 0){
            printf("%d \n",start);
        }
        start++;
    }

    // if we dont know the number of reprtation then we go for the do while 
    
    return 0;
}