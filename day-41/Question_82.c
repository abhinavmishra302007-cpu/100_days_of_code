//Print each character of a string on a new line.

#include <stdio.h>

int main(){
    char s[15]="HAPPPYDIPAWALI";
    int l=0;
    while(s[l]!='\0'){
    printf("%c\n",s[l]);
    l++;
    }
    
    return 0;
}