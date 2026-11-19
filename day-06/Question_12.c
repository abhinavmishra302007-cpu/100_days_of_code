
//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include<stdio.h>
int main(){
    float n;
    printf("the value of n is:");
    scanf("%f",&n);
    if(n == (int)n){
       
        if(n>0){
            printf("it is positive integer");
            
        }
        else if (n<0){
            printf("it is negative integer");
            
        }
        else
            printf("it is zero");
    }
    else
      printf("n is not an integer");
    return 0;
}