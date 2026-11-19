//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main(){
     int a,b;
     printf("enter value of a and b is :");
    scanf("%d %d",&a,&b);
     char c;
     printf("enter operator +,-,*,/,%%:");
     scanf(" %c ",&c);

    switch(c){
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%d",a/b);
        break;
        case '%':
        printf("%d",a%b);
        break;  
        default :
        printf("invalid operator")  ;                    
    }
    return 0;
}