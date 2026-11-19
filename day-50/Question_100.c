//Print all sub-strings of a string.

#include <stdio.h>

int main() {
    char s[100];

    printf("Enter a string: ");
    scanf("%99s", s);

    for(int i = 0; s[i] != '\0'; i++) {
        for(int j = i; s[j] != '\0'; j++) {
            for(int k = i; k <= j; k++) {
                printf("%c", s[k]);
            }
            printf("\n");
        }
    }

    return 0;
}