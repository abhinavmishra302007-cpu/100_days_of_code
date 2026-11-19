//Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main(){
    int a[3][3]={10,20,30,40,50,60,70,80,90};
    row=3,coulom=3;
   
    for(int i=0;i<row;i++){
         int sum[i];
         sum[i]=0;
        for(int j=0;j<3;j++){
                sum[i]=sum[i]+a[i][j];
             
            }
         printf("%d\n",sum[i]);
        }
    
    return 0;
}