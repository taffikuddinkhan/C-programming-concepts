#include <stdio.h>
int main(){
    int start,end;
    int sum =0;
    printf("Enter the range to get sum of even : ");
    scanf("%d",&start);
    scanf("%d",&end);

    for(int i = start ; i <=end ; i++){
        if(i%2==0){
            sum+=i;
        }
    }

    printf("The even number sum is : %d",sum);
    

}