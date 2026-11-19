//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {

    int n,place=1,binary=0,rem;
    printf("the value of n is ");
    scanf("%d",&n);

    while(n!=0){
        rem=n%2;
        binary=binary+rem*place;
        n=n/2;
        place=place*10;
    }
printf("binary representation of n is %d",binary);
    

    return 0;
}