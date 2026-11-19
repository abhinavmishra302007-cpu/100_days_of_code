//Count even and odd numbers in an array.

#include <stdio.h>

int main(){
    int n ,count1=0,count2=0;
     printf("Enter n: ");
    scanf("%d",&n);
    int a[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        
        if(a[i]%2==0){
           
            count1++;
        }
            else if(a[i]%2!=0)
            
           count2++;
    }
    printf("even number=%d,odd number =%d",count1,count2);

    return 0;
}