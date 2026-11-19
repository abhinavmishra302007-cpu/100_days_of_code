//Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main(){
    int a,b,hcf=1;
    printf("two numbers a and b are");
    scanf("%d %d",&a,&b);
    for(int i=1;i<=a&&i<=b;i++){
    if(a%i==0 && b%i==0)
    hcf=i;
    }
    printf("the hcf of a and b is %d",hcf);
    return 0;
}