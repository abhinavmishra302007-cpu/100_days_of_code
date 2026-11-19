//Print initials of a name with the surname displayed in full.

#include <stdio.h>

int main() {
    char s[100];
    int i, last = 0;

    printf("Enter name: ");
    scanf("%99[^\n]", s);

    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] == ' ')
            last = i;
    }

    printf("%c.", s[0]);

    for(i = 0; i < last; i++) {
        if(s[i] == ' ' && s[i+1] != '\0')
            printf("%c.", s[i+1]);
    }

    printf(" %s", s + last + 1);

    return 0;
}