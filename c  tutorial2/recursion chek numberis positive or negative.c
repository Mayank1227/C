#include<stdio.h>
int is_positive(int number)
{
  if (number >= 0)
   {
    return 1;
   }
   else
   {
    return 0;
   }
}

int main() 
{
  int number;

  printf("Enter a number: ");
  scanf("%d", &number);

  if (is_positive(number)) 
{
    printf("The number is positive.\n");
}
   else
   {
    printf("The number is negative.\n");
   }

  return 0;
}
