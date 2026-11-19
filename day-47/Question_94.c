//Find the longest word in a sentence.

#include <stdio.h>

int main() {
    char s[100];
    int count = 0, max = 0, start = 0, maxStart = 0;

    printf("Enter a sentence: ");

    scanf("%99[^\n]", s);

    for(int i = 0; s[i] != '\0'; i++) {

        if(s[i] != ' ') {
            count++;
        }
        else {
            if(count > max) {
                max = count;
                maxStart = start;
            }
            count = 0;
            start = i + 1;
        }
    }

    if(count > max) {
        max = count;
        maxStart = start;
    }

    printf("Longest word: ");

    for(int i = maxStart; i < maxStart + max; i++) {
        printf("%c", s[i]);
    }

    return 0;
}