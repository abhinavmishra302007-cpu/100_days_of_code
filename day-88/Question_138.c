//Print all enum names and integer values using a loop.

#include <stdio.h>
enum colours {red,yellow,green};
int main(){
  enum colours i;
  for(i=0;i<3;i++){
    if(i==0){
        printf("red=%d\n",i);
    }
    else if(i==1){
        printf("yellow =%d\n",i);
    }
    else if(i==2){ 
    printf("green=%d\n",i);
    }
    else {
        printf("no colour");
    }
  }
    return 0;
}