//Write a program to check if a number is an Armstrong number.

#include <stdio.h>

int main(){
    int n, digit,sum=0,original;
    printf("enter the n ");
    scanf("%d",&n);
    original=n;
    while(n!=0){
        digit=n%10;
        sum=sum+digit*digit*digit;
        n=n/10;

    }
    if(sum==original)
    printf("armstrong nnumber");
    else
    printf("not a armstrong number");
    return 0;
}