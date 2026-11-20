//Write a program to take a string input. Change it to sentence case.


#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    char ch;
    int first = 1;

    FILE *fp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    fp = fopen("input.txt", "w");
    fputs(str, fp);
    fclose(fp);

    
    fp = fopen("input.txt", "r");

    FILE *out = fopen("output.txt", "w");

    while ((ch = fgetc(fp)) != EOF) {

        if (isalpha(ch)) {
            if (first) {
                ch = toupper(ch);
                first = 0;
            }
            else {
                ch = tolower(ch);
            }
        }

        fputc(ch, out);
    }

    fclose(fp);
    fclose(out);

    
    out = fopen("output.txt", "r");

    printf("Sentence case: ");

    while ((ch = fgetc(out)) != EOF) {
        putchar(ch);
    }

    fclose(out);

    return 0;
}
