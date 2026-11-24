//Define an enum for traffic lights (RED, YELLOW, GREEN) 
//and print 'Stop', 'Wait', or 'Go' based on its value.

#include <stdio.h>
enum traffic_light{ RED,YELLOW,GREEN };
int main(){
    enum traffic_light x;
    printf("enter raffic light (0=RED,1=YELLOW,2=GREEN):");
    scanf("%d",&x);
   switch(x){
    case RED:
    break;
    printf("stop");
    case YELLOW:

    printf("Wait");
    break;
    case GREEN:

    printf("Go");
    break;

   }
    return 0;
}