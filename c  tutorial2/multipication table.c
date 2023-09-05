#include<stdio.h>
int main()
{
	int p,n;
	printf(" input the number ");
	scanf("%d",&n);
	printf ("\n");
	for (p=2; p<=20 ;p++)
	{
		printf (" %d * %d=%d\n",n,p,n*p);

	}
	
	return 0;
}
