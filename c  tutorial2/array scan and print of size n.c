// Scan and Print Array of Size n..

#include <stdio.h>
int main()
{
int A[5];
int i;
for(i = 0; i < 5; i++)
{
printf("Enter Element : ", i);
scanf("%d", &A[i]);
}
printf("\nYour Array : ");
for(i = 0; i < 5; i++)
{
printf("%d ",A[i]);
}
return 0;
}
