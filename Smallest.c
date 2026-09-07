#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the first value ");
    scanf("%d",&a);
    printf("Enter the second value ");
    scanf("%d",&b);
    printf("Enter the third value ");
    scanf("%d",&c);

    if(a<b){
        if(a<c){
            printf("%d is smallest" , a);
        }
        else{
            printf("%d is smallest" , c);
        }
    }
    else{

        if(b<c){
            printf("%d is small",b);
        }
        else{
            printf("%d is small",c);
        }
    }
    return 0;
}

// wap enter 5 sub mark for a student then display the grde ship of student   lab exp - 2 