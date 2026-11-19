//Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. 
//The elements in the sorted array might be repeated.
 //You need to print the first and last occurrence of the target and print the index of first and last occurrence.
 // Print -1, -1 if the target is not present.

 #include <stdio.h>
 
 int main(){
    int n,target;
    printf("size of an array is:");
    scanf("%d",&n);
    int num [n];


    for(int i=0;i<n;i++){
    scanf("%d",&num[i]);
    }
    printf("the value of target is ");
    scanf("%d",&target);
     int first = -1,last = -1;
    for(int i=0;i<n;i++){
        if(target==num[i]){
         first = i;
         break;
        }
    }
     for(int i=n-1;i>=0;i--){
        if(target==num[i]){
         last = i;
         break;
        }
    }
    printf("%d %d",first,last);
    return 0;
 }