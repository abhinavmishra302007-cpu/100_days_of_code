/*Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*  */


#include <stdio.h>

int main(){
    int n;
   for(int i=1;i<=9;i++) {
    if(i==1||i==9)
    n=1;
    else if(i==2||i==8)
    n=3;
    else if(i==3||i==7)
    n=5;
    else if(i==4||i==6)
    n=7;
    else
    n=9;
    for(int j=1;j<=n;j++){
        printf("*\n");
    }
    printf("\n");
   }
    return 0;
}