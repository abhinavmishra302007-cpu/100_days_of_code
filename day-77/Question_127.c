//Write a program that reads text from input.txt,
// converts all lowercase letters to uppercase, and writes the result to output.txt.


#include <stdio.h>
#include <ctype.h>

int main()
{
    int ch;
    FILE *fp1, *fp2;

    fp1 = fopen("input.txt", "w");

    if (fp1 == NULL)
    {
        printf("File cannot be opened");
        return 1;
    }

    fprintf(fp1, "My Name Is Abhinav Mishra");

    fclose(fp1);

    fp1 = fopen("input.txt", "r");
    fp2 = fopen("output.txt", "w");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("File cannot be opened");
        if (fp1 != NULL)
            fclose(fp1);
        if (fp2 != NULL)
            fclose(fp2);
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF)
    {
        ch = toupper(ch);
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}