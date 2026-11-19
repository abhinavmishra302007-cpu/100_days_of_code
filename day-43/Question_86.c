//Check if a string is a palindrome.

#include <stdio.h>
#include<string.h>
int main(){
    char s[10]="madam";
    int l=strlen(s);
    int count=0;
    for(int i=0;i<l/2;i++){
        if(s[i]==s[l-1-i]){
           count=1;
        }

    }
    if(count==1){
        printf("the string is palindrome");
    }
    else
        printf("the string is not palindrome");
    
    return 0;
}