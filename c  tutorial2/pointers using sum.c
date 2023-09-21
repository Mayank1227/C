#include<stdio.h>
main()
{
	int first,second,sum=0,*p,*q;
	printf("enter two number:");
	scanf("%d%d",&first,&second);
	
	p=&first;
	q=&second;
	
	sum=*p+*q;
	printf("the sum is %d ",sum);
}
