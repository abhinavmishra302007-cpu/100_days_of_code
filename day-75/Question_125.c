//Open an existing file in append mode and allow the user to enter a new line of text.
// Append the text at the end without overwriting existing content.

#include <stdio.h>

int main(){
    FILE*fp;
    char college[20]="UPES";
    fp=fopen("info.txt","a");
    if(fp==NULL){
        printf("the file is not opened");
        return 1;
    }
    fprintf(fp,"my college name is=%s",college);
    fclose(fp);
    printf("data successfully saved!");
    return 0;
}