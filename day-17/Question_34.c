//Write a program to check if a number is prime.

#include <stdio.h>

int main(){
    int n,i,a;
    printf(" value of n is:");
    scanf("%d",&n);



    for(i=2;i<n;i++){
  if(n%i==0)
a=1;
    break;
        
    } 

    if(a){
printf("n is not a prime number\n");
    
    }

else
printf("n is prime number\n");
 
    return 0;
}
