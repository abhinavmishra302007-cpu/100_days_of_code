/*Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *. */

   #include <stdio.h>
   
   int main(){
    int n ,m;
    for(int i=1;i<=7;i++){
    if(i==1||i==7)
    n=3;
    else if(i==2||i==6)
    n=2;
    else if(i==3||i==5)
    n=1;
    else
    n=0;
    for(int j=1;j<=n;j++){
    printf(" ");
    }
    if(i==1||i==7)
    m=1;
    else if(i==2||i==6)
    m=3;
    else if(i==3||i==5)
    m=5;
    else 
    m=7;
    for(int k=1;k<=m;k++){
    printf("*");
    }
    printf("\n");
}
    return 0;
   }