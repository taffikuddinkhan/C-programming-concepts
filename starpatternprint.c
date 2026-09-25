#include <stdio.h> 
 
int main() { 
    int num = 5; 
    
    // for (int i = 1; i <= num; i++) { 
    //     for (int j = 1; j <= i; j++) { 
    //         printf("%d",j); 
    //     } 
    //     printf("\n"); 
    // } 


    for (int i = num; i <= 1; i--) { 
        for (int j = num; j <= 1; j++) { 
            printf("%d",j); 
        } 
        printf("\n"); 
    } 

    
 
    return 0; 
}