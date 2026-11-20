//Write a program to take two sorted arrays of size m and n as input.
 //Merge both the arrays such that the merged array is also sorted.
//  Print the merged array.

#include <stdio.h>

int main(){
    int n,m;
    printf("number of element in a is");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("number of element in b is");
    scanf("%d",&m);
   
    int b[m];
    
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    int c[m+n];
    int i=0,j=0,k=0;
    while(i<n&&j<m){
        if(a[i]<b[j]){
        c[k]=a[i];
        i++;
        }
        else{
            c[k]=b[j];
            j++;
        }
        k++;
    }
    while (i < n) {
    c[k] = a[i];
    i++;
    k++;
}
while (j < m) {
    c[k] = b[j];
    j++;
    k++;
}
printf("Merged sorted array: ");
for (int x = 0; x < m + n; x++) {
    printf("%d ", c[x]);
}
    
    

    return 0;
}