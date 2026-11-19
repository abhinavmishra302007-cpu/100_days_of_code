//Rotate an array to the right by k positions.

#include <stdio.h>

int main(){
    int a[6]={2,6,7,5,11,5};
    int size=6,temp=0,k;
    printf("rotate the element by k positon value of k is ");
    scanf("%d",&k);
 
    for(int i=0;i<k;i++){
        temp=a[size-1];
        for(int j=size-1;j>0;j--){
        a[j]=a[j-1];
        
        
        }
        a[0]=temp;
    }

    for(int i=0;i<size;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}