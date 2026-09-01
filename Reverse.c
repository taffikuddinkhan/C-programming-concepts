#include <stdio.h>
int main(){
    int num = 123;
    int reverse = 0;
    while(num > 0){
        int lastdigit = num % 10;
        num/=10;
        reverse = reverse * 10 + lastdigit;
    }
    printf("%d" , reverse);
    return 0;
}