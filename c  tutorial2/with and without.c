// function  with peramitar and withaut return value....

#include<stdio.h>
void sum(int a,int b)
{
	int result;
	result=a+b;
	printf("sum=%d",result);
	
}
main()
{
	int a,b;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	sum (a,b);
}
