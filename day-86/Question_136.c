//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>
enum menu {ADD=1,SUBSTRACT,MULTIPLY};
int main(){
    enum menu op;
    int a,b;
    printf("the sum of two number is:");
    scanf("%d %d",&a,&b);
    printf("Enter menu (1=ADD,2=SUBSTRACT,3=MULTIPLY:");
    scanf("%d",&op);
    switch (op)
    {
    case ADD:
        printf("the sum of two numbers are %d",a+b);
        break;
    case SUBSTRACT:
        printf("the sum of two numbers are %d",a-b);
        break;
    case MULTIPLY:
        printf("the sum of two numbers are %d",a*b);
        break;
    
    default:
        break;
    }
    return 0;
}