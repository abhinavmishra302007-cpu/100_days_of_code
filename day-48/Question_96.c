//Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int start = 0, end;

    printf("Enter a sentence: ");
    scanf("%99[^\n]", s);

    for(int i = 0; ; i++) {
        if(s[i] == ' ' || s[i] == '\0') {
            end = i - 1;

            while(start < end) {
                char temp = s[start];
                s[start] = s[end];
                s[end] = temp;

                start++;
                end--;
            }

            if(s[i] == '\0')
                break;

            start = i + 1;
        }
    }

    printf("Result: %s", s);

    return 0;
}