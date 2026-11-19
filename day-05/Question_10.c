//Write a program to input time in seconds and convert it to hours:minutes:seconds format.



#include <stdio.h>
int main(){
    int min ,sec ,hours,c;

    printf("the time in second is:");
    scanf("%d",&sec);

    min=sec/60;
    hours=sec/3600;

   
   printf("%d:%d:%d",hours,min,sec);

    return 0;
}