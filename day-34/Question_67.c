//Insert an element in an array at a given position.

#include <stdio.h>

int main(){
    int a[6]={10,20,30,40,50};
    int num,position,n=5;
    printf("inserting element:");
    scanf("%d",&num);
    printf("at position:");
    scanf("%d",&position);
    int i=5;
    while(i>=position){
        a[i]=a[i-1];
        i--;
    }
    a[position-1]=num;
    for(int i=0;i<6;i++){
        printf("%d\n",a[i]);
    }
    
    return 0;
}