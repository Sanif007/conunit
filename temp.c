#include<stdio.h>
#include<math.h>
int main() 
{
       int itemp, opt;
       float ftemp;
       printf(" 1. °C to K \n ");
       printf(" 2. °F to °C \n ");
       printf(" 3. °F to K \n ");
       printf(" 4. For reversal of 1st option \n ");
       printf(" 5. For reversal of 2nd option \n ");
       printf(" 6. For reversal of 3rd option \n ");
       scanf("%d", &opt);
       switch(opt)
    {
         case 1 : printf("Enter temp in °C : ");
                      scanf("%d", &itemp);
                      ftemp = itemp + 273 ;
                      printf("Temp in K is : %3.2f ", ftemp);
                      break;
         case 2 : printf("Enter temp in °F : ");
                      scanf("%d", &itemp);
                      ftemp = 1.8 * ( itemp + 32 ) ;
                      printf("Temp in °C is : %3.2f", ftemp);
                      break;
        case 3 : printf("Enter temp in °F : ");
                     scanf("%d", &itemp);
                     float ftok;
                     ftok = (itemp * 1.8) + 32;
                     ftemp = ftok + 273;
                     printf("Temp in K is : %3.2f", ftemp);
                     break;
       case 4 : printf("Enter temp in K : ");
                    scanf("%d", &itemp);
                    ftemp = itemp - 273 ;
                    printf("Temp in °C is : %3.2f", ftemp);
                    break;
      case 5 : printf("Enter temp in °C : ");
                   scanf("%d", &itemp);
                   ftemp = 0.55 * (itemp - 32) ;
                   printf("Temp in °F is : ~ %3.2f ", ftemp);
                   break;
      case 6 : printf("Enter temp in K : ");
                   scanf("%d", &itemp);
                   float ctok ;
                   ctok = itemp - 273 ;
                   ftemp = 0.55 * ( ctok - 32 );
                   break;
        default : printf(" Invalid option!!");
     }
        return 0;
}