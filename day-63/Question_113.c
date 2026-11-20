//Write a program to take an integer array arr and an integer k as inputs.
// The task is to find the kth smallest element in the array. 
// Print the kth smallest element as output.

#include <stdio.h>

int main(){
    int k,n;
    printf("size of array is");
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
   printf("the value of k is :");
   scanf("%d",&k);

   if(k<1||k>n){
    printf("Invalid value of k\n");
        return 0;
   }
   for (int i=0;i<n-1;i++){
     for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
     }
   }
}

printf("%d",arr[k-1]);
   return 0;
}