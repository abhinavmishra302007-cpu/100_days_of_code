//Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets().
// The program should print all the lines to the console until EOF (end of file) is reached.

 #include <stdio.h>
 
 int main(){
    FILE*fp;
    int name[100];
    fp=fopen("info.txt","r");
    if(fp==NULL){
        printf("no file exist");
        return 1;
    }
   while(fgets(name,50,fp)!=NULL){.    //eof reached matlab sabhi variable aa jaye uss file ke 
    printf("%s",name);
   }
    fclose(fp);
    return 0;
 }