#include<stdio.h>
int is_even(int number)
{
  if (number % 2 == 0)
   {
    return 1;
   }
   else {
   return 0;
  }
}

int main() 
{
  int number;

  printf("Enter a number: ");
  scanf("%d", &number);

  if (is_even(number))
   {
    printf("The number is even.\n");
  } 
  else
   {
    printf("The number is odd.\n");
   }

  return 0;
}
