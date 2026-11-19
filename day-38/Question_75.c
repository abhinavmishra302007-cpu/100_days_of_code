//Add two matrices.

#include <stdio.h>

int main(){
   int a[3][2]={6,14,8,9,7,11};
   int b[3][2]={12,20,68,75,18,99};
    int row=3,coloum=2;
    int c[3][2];

    for(int i=0;i<row;i++){
       
        for(int j=0;j<coloum;j++){
             
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<coloum;j++){
    printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}