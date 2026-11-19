//Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main(){
    char s[20]="cbbad";

    for(int i=0;s[i]!='\0';i++){
        for (int j=i+1;s[j]!='\0';j++){
            if(s[i]==s[j]){
                printf("first repeating lowercase alphabet in string is %c",s[i]);
                goto end;
            }
        }
    }
    end:
     
    return 0;
}