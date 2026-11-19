//Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>
int main(){
    int n,product=1;
    printf("the value of n is:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    if(i%2==0){
        
            product=product*i;
       
    }
}
    printf("the product of first n even numbers are %d",product);
        
    return 0;
}