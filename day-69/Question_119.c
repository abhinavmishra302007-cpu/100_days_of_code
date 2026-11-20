/*Write a program to take an integer array as input. 
Only one element will be repeated. 
Print the repeated element. Try to find the result in one single iteration.*/


#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];
    int freq[n + 1] = {0};

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++) {
        freq[a[i]]++;

        if(freq[a[i]] == 2) {
            printf("Repeated element is: %d", a[i]);
            break;
        }
    }

    return 0;
}
