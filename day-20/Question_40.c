//Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main(){
    int n,digit,result=0,reverse=0,digit2;
   printf("the binary number is ");
   scanf("%d",&n);
   while(n!=0){

   digit=n%10;
  
   if(digit==0){
    result= result*10+1;

   }
   else{
result=result*10+0;
   }
   n=n/10;
}
while(result!=0){
digit2=result%10;
reverse=reverse*10+digit2;
result=result/10;
}
printf("1's compliment is %d",reverse);
    return 0;
}