// Write a program to take an integer array nums of size n, and print the majority element.
// The majority element is the element that appears strictly more than ⌊n / 2⌋ times.
/// Print -1 if no such element exists.
// Note: Majority Element is not necessarily the element that is present most number of times.

#include <stdio.h>

int main()
{
    int n;
    printf("the value of n is ");
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    int majority = -1;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (num[i] == num[j])
            {
                count++;
            }
        }
        if (count > n / 2)
        {
            majority = num[i];
            break;
        }
    }
    printf("Majority element is: %d\n", majority);

    return 0;
}