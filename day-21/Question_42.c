
//Write a program to check if a number is a perfect number.

#include <stdio.h>

int main(){
    int n,temp,sum=0;
    printf("enter value of n is");
    scanf("%d",&n);
    temp=n;
    for(int i=1;i<n;i++){

        if(n%i==0)
        sum=sum+i;
    }
    if(temp==sum){
        printf("n is a perfect number");
    }
    else 
    printf("not a perfect number");
    return 0;
}