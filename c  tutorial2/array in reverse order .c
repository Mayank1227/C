//Print Array in Reverse Order..

#include <stdio.h>
int main()
{
int n = 5, A[n], i;
for(i = 0; i < n; i++)
{
printf("Enter A[%d] : ", i);
scanf("%d", &A[i]);
}
printf("Reverse Array : ");
for(i = n - 1; i >= 0; i--)
{
printf("%d ",A[i]);
}
return 0;
}
