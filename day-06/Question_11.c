//Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>
int main(){
    int n;
    printf("the value of n is: ");
    scanf("%d",&n);
    if(n%2==0){
      printf("the n is even");
    }
      else{
        printf("n is odd");
      }
    
    return 0;
}