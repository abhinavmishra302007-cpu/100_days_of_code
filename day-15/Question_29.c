//Write a program to calculate the factorial of a number.
#include <stdio.h>
int main(){
   int n ,factorial=1;
   printf("the value of n is:");
   scanf("%d",&n);
   if(n<0)
   printf("the factorial of negative number is not defined");
   else{
   for(int i=1;i<=n;i++){
    
    factorial=factorial*i;
   }
   printf("the factorial of n is %d",factorial);
}
    return 0;
}