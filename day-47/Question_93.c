//Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>

int main() {
    char s1[10] = "listen";
    char s2[10] = "silent";
    int flag = 1;

    if (strlen(s1) != strlen(s2)) {
        flag = 0;
    }
    else {
        for (int i = 0; s1[i] != '\0'; i++) {
            int count1 = 0, count2 = 0;

            for (int j = 0; s1[j] != '\0'; j++) {
                if (s1[j] == s1[i]) {
                    count1++;
                }
                if (s2[j] == s1[i]) {
                    count2++;
                }
            }

            if (count1 != count2) {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1) {
        printf("Anagrams\n");
    } else {
        printf("Not Anagrams\n");
    }

    return 0;
}