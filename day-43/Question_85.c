//Reverse a string.

#include <stdio.h>
#include<string.h>
int main(){
  char s[20]="HAPPYDIPAWALI";
int l=strlen(s);
int temp;

  for(int i=0;i<l/2;i++){
temp=s[i];
s[i]=s[l-1-i];
s[l-1-i]=temp;

  }
  for(int i=0;i<l;i++){
    printf("%c",s[i]);
  }

  
    return 0;
}