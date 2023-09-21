//find sum of n number..
#include<stdio.h>
main()
{
	int n,sum=0;
	printf("enter the number");
	scanf("%d",&n);
	int i=1;
	printf ("the sum of first%d number is :-->",n);
	while (i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("%d,sum");
	return 0;
}
