//Create an enum for months and print how many days each month has

#include <stdio.h>
enum months{jan=1,feb,march,april,may,june,july,aug,sept,oct,nov,dec};
int main(){
    enum months m;
    printf("enter the month jan=1,feb=2,march=3,april=4,may=5,june=6\n");
        printf("july=7,aug=8,sept=9,oct=10,nov=11,dec=12:");
        scanf("%d",&m);
        switch(m){
      case jan:{
        printf("31");
        break;
      }
      case feb:{
        printf("28 or 29");
        break;
      }
      case march:{
        printf("31");
        break;
      }
      case april:{
        printf("30");
        break;
      }
      case may:{
        printf("31");
        break;
      }
      case june:{
        printf("30");
        break;
      }
      case july:{
        printf("31");
        break;
      }
      case aug:{
        printf("31");
        break;
      }
      case sept:{
        printf("30");
        break;
      }
      case oct:{
        printf("31");
        break;
      }
      case nov:{
        printf("30");
        break;
      }
      
      case dec:{
        printf("31");
        break;
      }
      default:
    printf("Invalid month");
        }
        
    return 0;
}