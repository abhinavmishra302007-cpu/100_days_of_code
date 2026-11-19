//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main(){
    int n;
    float sum=0.0;
    printf("enter the value of n" );
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        sum=sum+(float)(2*i)/(4*i-1);
    }
    printf("sum of n terms are %.2f",sum);
    return 0;
}