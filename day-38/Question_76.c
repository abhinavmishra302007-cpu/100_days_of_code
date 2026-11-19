//Check if a matrix is symmetric.

#include <stdio.h>

int main(){
    int a[3][3]={5,10,11,10,2,12,11,12,3};
int count=1;
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
             if(a[i][j]!=a[j][i]){
          count=0;
          break;
        }
    }
        if(count == 0){
            break;
        }
}
    if(count){
        printf("not a symmetric matrix");
    }
        else {
        printf(" symmetric matrix");
        }

    return 0;
}
