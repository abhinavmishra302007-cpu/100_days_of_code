//write a prgram to find the roots of a quadratic equation and categotize them.

#include <stdio.h>
#include<math.h>
int main(){
   int a,b ,c,root1, root2;
   printf("the value of a b c is");
   scanf("%d %d %d",&a,&b,&c);

   if(b*b-4*a*c<0){
    printf("the root are not real ");
   }
   else{
   root1=(-b+sqrt(pow(b,2)-4*a*c))/2*a;
   root2=(-b-sqrt(pow(b,2)-4*a*c))/2*a;
   printf("the roots are %d and %d\n",root1,root2);
 if(b*b-4*a*c>0)
 printf("real and distinct roots\n");
 else if(b*b-4*a*c==0)
 printf("real. and equal roots\n");
 
}
    return 0;
}