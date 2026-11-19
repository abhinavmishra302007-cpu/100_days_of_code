//Convert a lowercase string to uppercase without using built-in functions.

#include <stdio.h>

int main(){
    char s[20]="jaishreeram";
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='a'&&s[i]<='z'){
            s[i]=s[i]-32;
        }
    }
    printf("uppercase of the string is :%s",s);
    return 0;
}