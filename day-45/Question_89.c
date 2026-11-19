//Count frequency of a given character in a string.

 #include <stdio.h>
 
 int main(){
    char s[15]="programming";
    char ch='m';
   int count =0;

    for (int i=0;s[i]!='\0';i++){
        if(s[i]==ch){
            count++;

        }
    }
    printf("frequency of given char is %d",count);
    return 0;
 }