//Count Odd and Even Numbers from Array..

#include <stdio.h>
int main()
{
int A[] = {1, 2, 3, 4, 5, 6, 8, 21, 22, 33, 44, 66};
int odd_count = 0, even_count = 0, i;
int n = sizeof(A) / sizeof(A[0]);
printf("Array A : ");
for(i=0; i<n; i++)
printf("%d ", A[i]);
for(i = 0;i < n;i++)
{
if(A[i] % 2 == 0)
even_count += 1;
else
odd_count += 1;
}
printf("\nCount of Even Numbers : %d", even_count);
printf("\nCount of Odd Numbers : %d", odd_count);
return 0;
}
