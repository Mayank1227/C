#include <stdio.h>
float get_circle_area(float radius)
{
  float pi = 3.14159;
  return pi * radius * radius;
}

int main() 
{
  float radius, area;

  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);

  area = get_circle_area(radius);

  printf("The area of the circle is %.2f\n", area);

  return 0;
}
