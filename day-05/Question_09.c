//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include<math.h>


int main(){
    int p=5,t=2,r=200,si,ci;
    
    //where p is principle,r is rate and t is time.
    //si is simple interest and ci is compound interest
    si=(p*r*t)/100;

    printf("the value of simple interest is:%d\n",si);
    ci=p*pow((1+r/100),t)-p; 
      //to write the power we need header file include<math.h>
                                //pow(base,pwer)

   printf("the value of compound interset is %d",ci);    
                     
    return 0;
}