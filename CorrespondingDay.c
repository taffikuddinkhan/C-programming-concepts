#include <stdio.h>
int main(){
    int val;
    printf("Enter the number between 0-6  ");
    scanf("%d",&val);

    switch(val){
        case 0 :
            printf("SUN");
            break;
        case 1 :
            printf("MON");
            break;
        case 2 :
            printf("TUE");
            break;   
        case 3 :
            printf("WED");
            break;
        case 4 :
            printf("THU");
            break;  
        case 5 :
            printf("FRI");
            break;
        case 6 :
            printf("SAT");
            break;     
        default :
            printf("not valid value"); 
            break;          
    }
    return 0;
}