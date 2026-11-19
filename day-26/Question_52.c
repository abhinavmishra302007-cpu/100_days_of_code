/* Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*. */

#include<stdio.h>

int main(){
    int n;
    for(int i=1;i<=5;i++){
        if(i==1||i==5)
        n=1;
        else if (i==2||i==4)
        n=3;
        else
        n=5;

        for(int j=1;j<=n;j++){
            printf("*\n");
        }
        printf("\n");
    }
return 0;
}