//Remove all vowels from a string.

 #include <stdio.h>
 
 int main(){
    char s[20]="EDUCATION";
     for(int i=0;s[i]!='\0';i++){
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            for(int j=i;s[j]!='\0';j++){
                s[j]=s[j+1];

            }
            i--;
        }

     }
     printf("after toggle the string is: %s",s);
    return 0;
 }