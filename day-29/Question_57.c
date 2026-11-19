//Find the sum of array elements.

#include <stdio.h>

int main(){
    int sum=0;
    int a[]={1,11,22,33,44};
    
    for(int i=0;i<=4;i++){
      sum=sum+a[i];

    }
    printf("sum of the elements of array %d",sum);
    return 0;
}