//Find Number of Elements in Array..

#include <stdio.h>
int main()
{
int A[] = {1, 2, 3, 4, 5, 6, 7, 8}, i;
int n = sizeof(A) / sizeof(A[0]);
printf("Array Elements : ");
for(i=0; i<n; i++)
printf("%d ", A[i]);
printf("\n\nNumber of Elements in Array : %d", n);
return 0;
}

