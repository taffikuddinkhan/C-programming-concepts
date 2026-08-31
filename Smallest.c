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
            printf("a is smallest");
        }
        else{
            printf("c is smallest");
        }
    }
    else{

        if(b<c){
            printf("b is small");
        }
        else{
            printf("c is small");
        }
    }
    return 0;
}

// wap enter 5 sub mark for a student then display the grde ship of student