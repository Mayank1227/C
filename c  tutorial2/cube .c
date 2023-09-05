#include <stdio.h>
int main()
{
	int  t,n,cube;
	printf(" input a number ");
	scanf("%d",&n);
	for (t=1; t<=n ;t++)
	{
		cube = t*t*t;
	printf ("number is : %d and cube of the %d is : %d\n",t,t,cube);

	}
	
	return 0;
}
