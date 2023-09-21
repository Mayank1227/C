#include<stdio.h>
int add (int ,int);     //perameter and return type
main()
{
	int a,b,result;
	printf("enter two number:");
	scanf("%d%d,&a ,&b");
	result=add(a,b);
	printf('/n addition=%d, result');

}
int add(int a, int b)   //Arguments
{
	return (a+b);     //It will return the addition
}
