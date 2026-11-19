//Find the transpose of a matrix.

#include <stdio.h>

int main(){
    int a[3][3]={10,20,30,40,50,60,70,80,90};
    int row=3,coulom=3,temp=0;;
    for(int i=0;i<row;i++){
        for(int j=i+1;j<coulom;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

     for(int i=0;i<row;i++){
       
        for(int j=0;j<coulom;j++){
           temp=a[i][j];
          a[i][j]=a[j][i];
          a[j][i]=temp;
    
        }
    
}
for(int i=0;i<row;i++){
    for(int j=0;j<coulom;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}

    return 0;
}

