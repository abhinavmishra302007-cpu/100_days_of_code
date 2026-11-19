//Write a program to find and display the sum of the first n natural numbers.

#include<stdio.h>

int main(){
    int n, sum=0;
    printf("first n natural numbers are:");
    scanf("%d",&n);
   for(int i=0;i<=n;i++){
   sum=sum+i ;
   }
printf("the sum of first n natural number is %d",sum);

    return 0;
}