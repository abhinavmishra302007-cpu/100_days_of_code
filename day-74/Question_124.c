//Take two filenames from the user – a source file and a destination file.
// Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>

int main(){
    FILE*src,*dest;
    char source[100],destination[100];
int ch;
printf("Enter the source file name: ");
scanf("%s",source);
printf("Enter the destination file name: ");
scanf("%s",destination);
    src=fopen(source,"r");
    if(source==NULL){
        printf("source file is not found");
        return 1;
    }
   dest =fopen(destination,"w");
    if(destination==NULL){
         printf("Cannot create destination file!");
        fclose(src);
        return 1;
    }
    while(ch=fgetc(src)!=EOF){
        fputc(ch,dest);
        
    }
    fclose(src);
    fclose(dest);
    return 0;
}