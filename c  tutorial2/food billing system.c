#include <stdio.h>
int main()
{
 int a,qty,rate,total;
 printf("\nMENU CARD \nSelect your food \n1. pizza  price=180r/ pcs \n2.burger  price=100rs/pcs \n3.dosa   price=120rs/pcs \n4.idli   price=50rs/pcs ");
 
 printf("\nplease enter your chois..:");
 scanf("%d",&a);
 switch(a)
 {
  case 1:
     printf("\nYou have selected pizza.\n Enter the quantity: ");
     scanf("%d",&qty);
     rate=180;
     total=qty*rate;
     printf("\nTotal amount :%d",total);
    break;
  case 2:
     printf("\nYou have selected burger.\n Enter the quantity: ");
     scanf("%d",&qty);
     rate=100;
     total=qty*rate;
     printf("\nTotal amount :%d",total);
    break;
  case 3:
     printf("\nYou have selected dosa.\n Enter the quantity: ");
     scanf("%d",&qty);
     rate=120;
     total=qty*rate;
     printf("\nTotal amount :%d",total);
    break;
   case 4:
     printf("\nYou have selected idli.\n Enter the quantity: ");
     scanf("%d",&qty);
     rate=50;
     total=qty*rate;
     printf("\nTotal amount %d",total);
    break;
   default:
     printf("\nSorry Unavailable %ds",a);
    break;
  }
    return 0;
}
