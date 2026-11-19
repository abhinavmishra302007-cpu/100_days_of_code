//Write a program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit 
//Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit

#include <stdio.h>

int main(){
    int a,b,c,d;//a is units use 
    printf(" value of bill in units is ");
    scanf("%d",&a);
    if(a>=0&&a<=100){
     b=a*5;
     printf("thhe value of b is %d",b);
    }
        else if(a>100&&a<=200){
      c=100*5+(a-100)*7;

printf("the vlue of c is %d",c);
}
else if(a>200&&a<=300){
d=100*5+100*7+(a-200)*10;
printf("the value of d is %d",d);
    }
    else 
    100*5+100*7+100*10+(a-300)*12;
    return 0;
}