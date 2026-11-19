//Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i, j, count;

    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(i%j!=0){
                printf("%d",i);
            }
        }
    }
  

    return 0;
}