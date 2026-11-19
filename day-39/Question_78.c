//Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>
int a[3][3]={5,4,2,5,10,10,5,9,30};
int main(){
    int sum=0;
    for(int i=0;i<3;i++){
        sum=sum+a[i][i];
    }
    printf("Sum of main diagonal elements: %d",sum);
    return 0;
}