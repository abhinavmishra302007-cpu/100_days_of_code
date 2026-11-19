// Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>
int a[3][3]={{8,18,28},{18,38,58},{28,18,88}};
int flag =1;
int main(){
for(int i=0;i<3;i++){
    for(int j=i+1;j<3;j++){
      if(a[i][i]==a[j][j]){
        flag=0;
        break;
      }
    }
    if(flag==0)
        break;
}
 if (flag == 1)
        printf("Diagonal elements are distinct");
    else
        printf("Diagonal elements are not distinct");

    return 0;
}