//Write a program to check if a number is a palindrome.

#include <stdio.h>


int main(){

    int n,reverse=0,digit,original;
    printf("the value of n is:");
    scanf("%d",&n);
original=n;
    while(n!=0){
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;

    }
    if(original==reverse){
        printf("the number is palindrome");

    }
    else{
        printf("the number is not palindrome");
    }
    return 0;
}