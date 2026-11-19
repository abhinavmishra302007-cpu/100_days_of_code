//Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main(){
    int a[7]={8,28,38,48,58,68};
int num,n=6;
    printf("enter the element to insert:");
    scanf("%d",&num);

    int i=n-1;
    while(a[i]>num){
        a[i+1]=a[i];
      
    }
    a[i+1]=num;
for(int i=0;i<7;i++)
printf("%d\n",a[i]);
    
    return 0;
}