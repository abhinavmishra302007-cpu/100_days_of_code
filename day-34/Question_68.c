//Delete an element from an array.

#include <stdio.h>

int main(){
    int a[5]={1,7,18,45,93};
    int size =5,position,delete;
    printf("the position from which you want to delete the data");
    scanf("%d",&position);

int i=position-1;
delete=a[i];
if(position<=0||position>size){
   printf("invalid position");
}
else{
for(i=position-1;i<size-1;i++){
    a[i]=a[i+1];
}
}
//size--;

for(int i=0;i<size;i++){
    printf("%d\n",a[i]);
}
printf("the deleted element is %d",delete);
    return 0;
}