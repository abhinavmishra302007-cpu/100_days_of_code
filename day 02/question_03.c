//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main(){
    int length = 7, breadth = 3;

    printf("the area of rectangle is %d\n",length*breadth);
    printf("the perimeter of rectangle is %d",2*(length+breadth));
    return 0;
}