// function  withaut peramitar and with return value....

#include<stdio.h>
int factorial()
{
	int f=1,n,i;
	printf("enter a number");
	scanf("%d",n);
	
	for(i=1;i<=n;i++)
	{
	   f=f*1;
	}
	return f;
}
 main()
 {
 	int ans;
 	ans=factorial();
 	printf("factorial=%d",ans);
 }


