//Count vowels and consonants in a string.

#include <stdio.h>

int main(){
    char s[20]="UPESBIDHOLI";
int v=0,c=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            v++;
        }
        else 
            c++;
        
    }
    printf("the number of vowels in th string is:%d\n",v);
    printf("the number ofconsonants in th string is:%d",c);
    
    return 0;
}