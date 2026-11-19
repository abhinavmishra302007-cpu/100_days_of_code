//Toggle case of each character in a string.

#include <stdio.h>

int main(){
    char s[20]="ABHINAV mishra";

    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='a'&&s[i]<='z'){
            s[i]=s[i]-32;

        }
        else if (s[i]>='A'&&s[i]<='Z'){
            s[i]=s[i]+32;
        }
    }
    printf("after toggle the string is: %s",s);
    
    return 0;
}