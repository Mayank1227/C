// Find Maximum and Minimum from Array..

#include <stdio.h>
int main()
{
int a[5], i, max;
for (i = 0; i < 5; i++)
{
printf("\nEnter the number: ");
scanf("%d", &a[i]);
}
max = a[0];
for (i = 0; i < 5; i++)
{
if (a[i] > max)
max = a[i];
}
printf("\nThe maximum number is: %d", max);
return 0;
}
