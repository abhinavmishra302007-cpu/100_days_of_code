//Write a program to check if a number is a strong number.

#include <stdio.h>

int main(){
    int n,num,factorial=1,sum=0,temp;

     printf("enter value of n is");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        num=n%10;
        factorial=1;
        for(int i=1;i<=num;i++){
            factorial=factorial*i;
        }
        sum=sum+factorial;
        n=n/10;
    }
    if(temp==sum){
        printf("the number is strong number");
    }
        else
        printf("not a strong number");
    return 0;
