/*Q56 (Arrays (1D))


Read and print elements of a one-dimensional array. */

#include <stdio.h>

int main(){
    int a[]={10,30,50};
    for(int i=0;i<=2;i++){
        printf("%d\n",*(a+i));
    }
    return 0;
}