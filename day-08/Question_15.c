
//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>
int main(){

char ch;
printf("the character is:");
scanf("%c",&ch);

if(ch>='A' &&ch<='Z')
printf("the character is uppercase alphabet");

else if(ch>='a'&&ch<='z')
printf("the character is lowercase alphabet");

else if(ch>= '0'&&ch<='9')
printf("the character is digit ");
else
printf("the character is special");
    
return 0;
}