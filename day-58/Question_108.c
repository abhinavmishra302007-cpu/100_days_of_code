//Write a Program to take an integer array nums. 
//Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. 
//The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

#include <stdio.h>

int main(){
    int n;
    printf("the value of n is ");
    scanf("%d", &n);
    int num[n],answer[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for(int i=0;i<n;i++){
        int product =1;
        for(int j=0;j<n;j++){
            if(i!=j){
                product=product*num[j];
            }
        }
        answer[i]=product;
    }
         for(int i = 0; i < n; i++) {
        printf("%d", answer[i]);

        if(i < n - 1) {
            printf(", ");
        }

    }
    return 0;
}