//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main(){
  int n;
  float sum=1.0 , number;
    printf("enter the value of n is");
    scanf("%d",&n);
    for(int i=3;i<2*n+1;i++){
     number = (float)i/(i+1);
     sum=sum+number;
     i++;
    }
    printf("the value of sum of n terms are %.2f",sum);
    return 0;
}