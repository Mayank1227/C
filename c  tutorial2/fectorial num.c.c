#include<stdio.h>
int factorial()
{
	int n,i,f=1;
	printf("enter a number");
	scanf("%d",&n);
	for (i=1;i<=n; i++)
{
	f=f*i;
}
return f;
	
}
main()
{
	int ans;
	ans=factorial();
	printf ("factorial=%d",ans);
}
