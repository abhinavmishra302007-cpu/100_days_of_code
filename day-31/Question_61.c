//Search for an element in an array using linear search.

#include <stdio.h>

int main(){
    int n,found;
    found=0;
    int a[5]={10,25,30,45,50};
    printf("search the element is:");
    scanf("%d",&n);

    for(int i=0;i<5;i++){
        if(a[i]==n){
        printf("found at index %d",i);
        found=1;
        break;
        }
       
    }
    if(found==0)
    printf("the element is not found");


    return 0;
}