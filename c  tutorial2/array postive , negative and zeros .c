 //Count Positive, Negative and Zeros in Array..
 
#include <stdio.h>
int main()
{
int A[]={3, 5, 12, 89, 65, 45, 32, 0, -9, 0, -89, 0, 0};
int Pos = 0, Neg = 0, Zero = 0, i, n;
n = sizeof(A)/sizeof(A[0]);
printf("Array Elements :--> ");
for(i=0; i<n; i++)
printf("%d ", A[i]);
for(i = 0; i < n; i++)
{
if(A[i] == 0)
Zero++;
else if(A[i] > 0)
Pos++;
else
Neg++;
}
printf("\nNumber of Zeros: %d ", Zero);
printf("\nNumber of Positive: %d ", Pos);
printf("\nNumber of Negative: %d", Neg);
return 0;
}
