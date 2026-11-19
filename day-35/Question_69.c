//Find the second largest element in an array.

#include <stdio.h>

int main(){
    int max1,max2;
    int a[7]={20,51,17,14,33,29,48};
    int size=7;
    if(a[0]>a[1]){
        max1=a[0];
        max2=a[1];
    }
    else if(a[1]>a[0]){
        max1=a[1];
        max2=a[0];
    }

for(int i=2;i<size;i++){
    if(a[i]>max1){
        max1=a[i];
        max2=max1;
    }
    else if(a[i]>max2){
        max2=a[i];
    }
}
printf("the second largest element is %d",max2);

    return 0;
}