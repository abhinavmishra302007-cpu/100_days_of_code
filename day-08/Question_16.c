//Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>
int main (){
    int a,b,c;
    printf("the value of a b and c is ");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b&&a>c){
        printf(" a is greater among of them");
    }
        else if(b>c&&b>a){
            printf("b is greater among of them");
        }
        else if (c>a&&c>b){
            printf("c is greater among of them");
        }
    
      

        
    return 0;
}