//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main(){
int a,b,c;
printf("side of the traingles are");
scanf("%d %d %d",&a,&b,&c);

if(a==b&&b==c){
    printf("equilateral traingle");
}
    else if(a==b||b==c||a==c){
        printf("isosceles traingle");
    }
else
 printf("scalene traingle ");
    return 0;
}