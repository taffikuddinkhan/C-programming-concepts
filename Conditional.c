#include <stdio.h>

int main(){
    int a = 15;
    int b = 25;

    // a>b?printf("a is big") : printf("b is big\n");  ternary operator 

    // sizeof() method is used to find the size
    //. / ->  is used to access the structure 


    // an operator precidence defines which operator will execute among many operator
    // operator with higher precidence is execute before lower precedencie operator
  

    // operator associativity determines the order in which operators of the same precedence are evaluated 
    // associativity can be left to right or right to left depending on the operator

    int res = 100/10*10;
    // if operator have same priority then the statement will be execute from left to right


    //Control statement - 3 types (select , loop , jump)
    //select statement --------------------------------

    
    if(a>b){
        printf("a is big");
    } else {
        printf("B is big");
    }  

    // note :- in case of the if block only one statement is there then curly braces is optional but it is a good practice to give curly braces.
     if(a>b)
        printf("a is big");


        // wap enter the mark of a particular subject and display the grade



    return 0;
}