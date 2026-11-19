//Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main(){
    float cp=1200,sp=1000;
    float profitpercentage,losspercentage;
profitpercentage=((sp-cp)/cp)*100;
losspercentage=((cp-sp)/cp)*100;

printf("the value of profitpercentage is %f\n",profitpercentage);
printf("the value of lose percentage is %f",losspercentage);
    return 0;
}