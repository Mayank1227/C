//Add Elements of an Array..

#include <stdio.h>
int main()
{
int A[5];
int i, sum = 0;
for(i = 0; i < 5; i++)
{
printf("Enter A[%d] : ", i);
scanf("%d", &A[i]);
sum = sum + A[i];
}
printf("The sum of the array elements is : %d",sum);
return 0;
}
