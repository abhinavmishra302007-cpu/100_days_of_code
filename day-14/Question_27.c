//Write a program to print the sum of the first n odd numbers.

#include<stdio.h>

int main(){
int n,sum=0;
printf("the value of n is:");
    scanf("%d",&n);
for(int i=1;i<=2*n-1;i++){
    if(i%2!=0){
        sum=sum+i;
        
    }
}
printf("sum of n odd numbers are %d",sum);

    return 0;
}