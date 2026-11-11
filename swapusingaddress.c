#include <stdio.h>

void swap(int *a , int *b){

    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a,b;
    printf("Enter the firsst value : - ");
    scanf("%d",&a);
    printf("Enter the second value : -");
    scanf("%d",&b);
    printf("Before calling the function a=%d , b=%d\n",a,b);
    swap(&a,&b);
    printf("After calling the function a=%d , b=%d",a,b);
}