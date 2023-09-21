#include<stdio.h>
void swap()
{
	int a,b;
	printf ("enter the value of a:");
	scanf ("%d ",&a);
	printf ("enter the value of b:");
	scanf ("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf (" \nthe value of a=%d and of b=%d",a,b);
}
main()
{
	swap();
}
