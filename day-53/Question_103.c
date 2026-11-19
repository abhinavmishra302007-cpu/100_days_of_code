// Write a Program to take an array of integers as input, calculate the pivot index of this array.
// The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.
// If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left.
// This also applies to the right edge of the array.
// Print the leftmost pivot index. If no such index exists, print -1.

#include <stdio.h>

int main()
{
    int n;
    printf("number of element in an array is :");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        totalsum += arr[i];
    }
    int leftsum = 0;
    int pivot = -1;
    for (int i = 0; i < n; i++)
    {
        int rightsum = totalsum - leftsum - arr[i];
        if (rightsum == leftsum)
        {
            pivot = i;
            break;
        }
        leftsum += arr[i];
    }
    printf("pivot index is %d", pivot);
    return 0;
}
