//Write a program to input a character and check whether it is a vowel or consonant using if–else.



#include <stdio.h>
int main(){
 char x;
 printf("character =");
 scanf("%c",&x);
 if(x == 'a'||x=='e' ||x=='i'||x=='o' ||x=='u'){
    printf("character is vowel");

 }
 else
  printf("character is consonant");
    
    return 0;
}