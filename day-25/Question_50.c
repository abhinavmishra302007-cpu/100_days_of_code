/*Write a program to print the following pattern:
*****
 ****
  ***
   **
    *. */

    #include<stdio.h>

    int main(){
   

   for(int i=0;i<5;i++){
    for(int k=5; k<5-i;k++){
        printf(" ");
    }

    for(int j=1;j<=5-i;j++){
        printf("*");
    }
   

printf("\n");
   }



        return 0;
    }