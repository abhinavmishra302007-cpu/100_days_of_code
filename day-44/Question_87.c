//Count spaces, digits, and special characters in a string.

 #include <stdio.h>
 #include <string.h>
 
 int main(){
    char s[20]="@bhin@v 307";
    int sp=0,d=0,sc=0;
    int l=strlen(s);
    for(int i=0;i<l;i++){
        if(s[i]==' '){
            sp++;
        }
        else if(s[i]>='0' && s[i]<='9'){
            d++;
        }
        else if((s[i] >= 'a' && s[i] <= 'z') ||(s[i] >= 'A' && s[i] <= 'Z')){
        
    continue;
        }
        else
        sc++;    
    }
    printf("the number of spaces in the string is:%d\n",sp);
    printf("the number of digit in the string is:%d\n",d);
    printf("the number of special characters in the string is:%d\n",sc);
    return 0;
 }