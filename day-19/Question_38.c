//Write a program to find the sum of digits of a number.
#include <stdio.h>

int main(){
    int n,i,sum=0,digit;
    printf("value of n is ");
    scanf("%d",&n);
while(n!=0){
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    printf("sum of digits of a number is %d",sum);
    return 0;
}