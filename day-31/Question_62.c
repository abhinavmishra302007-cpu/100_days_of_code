//Reverse an array without taking extra space.

#include <stdio.h>

int main(){
    int n,original;
    int a[]={10,20,30,40,50};
    n=5;
    

    for(int i=0;i<n/2;i++){

        
        original=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=original;

    }
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
   
    return 0;
}