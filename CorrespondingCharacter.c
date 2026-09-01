#include <stdio.h>
int main(){
    char ch;
    printf("Enter a characyer A-E ");
    scanf("%c",&ch);

    switch(ch){
        case 'A' :
            printf("Anaconda");
            break;
        case 'B' :
            printf("Boy");
            break;
        case 'c' :
            printf("calm");
            break;   
        case 'D' :
            printf("Dog");
            break;
        case 'E' :
            printf("Eagle");
            break;  
        default :
            printf("not valid character"); 
            break;          
    }
    return 0;
}