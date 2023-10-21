// do while 

#include <stdio.h>
int main()
{
  int n;
  do
{
   printf("\n\n1. Hello World");
   printf("\n2. Welcome to the world of programming");
   printf("\n3. Exit");
   printf("\n\nEnter Your Choice : ");
   scanf("%d",&n);
   int temp = n;
    switch(temp)
    {
      case 1:
      printf("\nHello World");
      break;
      
      case 2:
      printf("\nWelcome to the world of programming");
      break;
      
     case 3:
        Exit(0);
        
     default:
     printf("\nPlease enter the valid number");
   }
  }
   while(n>0);
   return 0;
}
