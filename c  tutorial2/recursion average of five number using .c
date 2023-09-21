#include <stdio.h>
float average_of_five(int num1, int num2, int num3, int num4, int num5)
{
  float sum = num1 + num2 + num3 + num4 + num5;
  return sum / 5;
}

int main()
{
  int num1, num2, num3, num4, num5;
  float average;

  printf("Enter five numbers: ");
  scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

  average = average_of_five(num1, num2, num3, num4, num5);

  printf("The average of the five numbers is %.2f\n", average);

  return 0;
}
