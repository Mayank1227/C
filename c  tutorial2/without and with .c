#include<stdio.h>
int factorial()   //return type- int
{
	int num,i,f=1;
	printf("enter a number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		f=f*i;
	}
	return f;
}
main()
{
	int ans;
	ans=factorial();
	printf("factorial=%d",ans);
}
