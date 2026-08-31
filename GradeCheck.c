#include <stdio.h>
int main(){
    int mark;
    printf("Enter the mark: ");
    scanf("%d", &mark);

    if(mark>=90 && mark<=100){
        printf("Grade o");

    } else if(mark>=80 && mark<=89){
        printf("Grade E");
    } else if(mark>=70 && mark<=79){
        printf("Grade A");
    } else if(mark>=60 && mark<=69){
        printf("Grade B");
    } else if(mark>=50 && mark<=59){
        printf("Grade C");
    } else if(mark>=45 && mark<=49){
        printf("Grade D");
    } else if(mark <= 45){
        printf("Grade F");
    }
    else{
        printf("Invalid mark entered.");
    }

    //wap to rnter the age of a person to check for vote or not


}