#include<stdio.h>
int main()
{
	int i,n ,sum=0;
	printf("enter uppar number limit ");
	scanf("%d",&n);
	for (i=2; i<=n ;i+=2)
	{
		sum+=i;
	}
	
	printf ("sum of even nubers: %d", n, sum);
	
	return 0;
}
