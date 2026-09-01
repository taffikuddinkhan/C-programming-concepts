#include <stdio.h>
int main(){
    char ch;
    printf("Enter a characyer A-Z");
    scanf("%c",&ch);

    switch(ch){
        case 'A' :
            printf("vowel");
            break;
        case 'E' :
            printf("vowel");
            break;
        case 'I' :
            printf("vowel");
            break;   
        case 'O' :
            printf("vowel");
            break;
        case 'U' :
            printf("vowel");
            break;  
        default :
            printf("character is a constant "); 
            break;          
    }
    return 0;
}