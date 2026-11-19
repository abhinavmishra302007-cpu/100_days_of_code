//Search in a sorted array using binary search.

#include <stdio.h>

int main(){
    int mid;
    int a[6]={1,11,21,31,41,51};
    int low=0,high=6-1,target;
    printf("target number is which we need to find is:");
    scanf("%d",&target);
    while(low<=high){
        mid=(high+low)/2 ;
        if(a[mid]==target){
            printf("the target number index is %d",mid);
            break;
        }
            else if (a[mid]>target){
                high=mid-1;
            }
                else
                low=mid+1;
            
        
    }
    return 0;
}