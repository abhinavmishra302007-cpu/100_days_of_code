//Perform diagonal traversal of a matrix.

#include <stdio.h>

int main(){
    int a[3][3]={5,4,3,2,1,6,7,8,9};
for(int k=0;k<=5;k++){
    for(int i=0;i<3;i++){
        int j=k-i;
        if(j>=0&&j<3){
            printf("%d\n",a[i][j]);
        }
        
    }
}
    return 0;
}