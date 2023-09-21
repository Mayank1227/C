//Do while  positive and negtive number..

#include <stdio.h>
int main()
{
  int n;
  do
   {
     printf("\n1. First 10 positive numbers");
     printf("\n2. First 10 negative number ");
     printf("\n0. Exit ");
     printf("\n\nEnter Your Choice: ");
     scanf("%d", &n);
     if(n == 1) 
      {
     int i = 1;
     while(i < 11)
      {
      printf("%d ",i);
     i++;
      }
      printf("\n");
     }
      else if(n == 2)
      {
       int i = -1;
       while(i > -11)
     {
      printf("%d ",i);
      i--;
     }
     printf("\n");
     }
     else if(n == 0)
     {
      break;
     }
      else
     {
      printf("\nPlease Enter a valid option\n");
     }
     }  
     while(n != 0);
      return 0;
}
