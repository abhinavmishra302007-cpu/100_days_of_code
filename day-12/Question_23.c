//Write a program to calculate library fine based on late days as follows: 
//First 5 days late: ₹2/day 
//Next 5 days late: ₹4/day 
//Next 20 days days late: ₹6/day 
//More than 30 days: Membership Cancelled.

#include <stdio.h>

int main(){
    int a,b,c,d;
    printf("number of days you miss the library is ");
    scanf("%d",&a);

if(a<=5){
b=    a*2;
    printf("the fine is %d",b);
}
else if (a>5&&a<=10){
   c=5*2+(a-5)*4;
    printf("the fine is %d",c);
}
else if(a>10&&a<=30){
    d=5*2+5*4+(a-10)*6;
    printf("the fine is %d",d);
    

}
    

else 
printf("your Membership Cancelled");


    return 0;
}
