//Write a C program that creates a text file named info.
//txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). 
//After writing, display a message confirming that the data was successfully saved.

#include <stdio.h>

int main(){
    int age;
    char name[50];
    FILE*fp;
    fp=fopen("info.txt","w");
    if(fp==NULL){
        printf("THE FILE IS NOT CREATED");
        return 1;
    }
    printf("enter your age is:");
    scanf("%d",&age);
    printf("enter your name is:");
scanf("%s",name);

fprintf(fp,"Age:%d,Name:%s", age ,name);

fclose(fp);

printf("Data successfully saved!");

    return 0;
}

