//Count characters in a string without using built-in length functions.


#include <stdio.h>

int main(){
    char s[12] = "ABHINAV";
    int l=0;
    while(s[l]!='\0'){
        l++;
    }
    printf("number of character in the string is:%d",l);

    return 0;
}