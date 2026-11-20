//write a program to take an integer array arr as input.
// The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. 
// Print the maximum sum as output.
//  If all elements are negative, print the largest (least negative) element.

#include <stdio.h>

int main(){
    int n;
    printf("size of array is");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int currentsum=a[0];
    int maxsum=a[0];
    for(int i=0;i<n;i++){
       int option 1=currentsum+a[i];
       int option 2=a[i];
       if(opition 1> option 2)
       currentsum=option 1;
       else{
       currentsum=option 2;
       }
       if(currentsum>maxsum)
       maxsum=currentsum;
    }
    printf("%d",maxsum);
    return 0;
}