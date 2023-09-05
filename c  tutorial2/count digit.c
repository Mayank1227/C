#include<stdio.h>
int main()
{
	int n,count=0;
	printf("enter numbers");
	scanf("%d",&n);
	while(n>0)
	{
		n=n/10;
		count++;
		
	}
	printf("total %d,count");
	return 0;
}
