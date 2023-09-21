#include<stdio.h>
int maximum(int num1, int num2) 
{
  if (num1 > num2)
  {
    return num1;
  }
   else
    {
    return num2;
    }
}

int main()
 {
  int num1, num2, max;

  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);
  max = maximum(num1, num2);

  printf("The maximum number is %d\n", max);

  return 0;
}        
