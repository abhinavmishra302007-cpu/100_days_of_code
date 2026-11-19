//Write a program to find the LCM of two numbers.
#include <stdio.h>

int main(){
    int a,b,lcm=0;
    printf("the two number a and b is ");
    scanf("%d %d",&a,&b);
    printf("lcm of two number %d and %d is",a,b);
    for(int i=2;i<=a*b;i++){
        if(i%a==0&&i%b==0){
            lcm=i;
            break;
        }

    }
    printf("%d",lcm);
    return 0;
}