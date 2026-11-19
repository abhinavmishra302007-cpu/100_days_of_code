//Read and print a matrix.

#include <stdio.h>

int main(){
    int a[2][3];
    printf("the elements of 2d array ");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
        
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}