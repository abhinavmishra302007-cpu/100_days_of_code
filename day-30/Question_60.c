//Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main(){
    int n,count1=0,count2=0,count3=0;
    printf("enter n:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
       
    
     if(a[i]>0){
            count1++;
        }
       else if(a[i]<0)
        count2++;
       else
        count3++;
       
       
    }
    printf("positive element of an array=%d\n",count1);
    printf("negative element of an array=%d\n",count2);
    printf("number of zero in array is= %d\n",count3);
        
    return 0;
}