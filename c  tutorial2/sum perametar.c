#include<stdio.h>
void add(num1,num2)
{
	int ans;
	ans =num1+num2;
	printf ("ans=%d", ans);
	
	
}
main()
{
	int num1 ,num2 ;
	printf ("enter two number");
	scanf("%d%d",&num1, &num2);
	add (num1,num2);
}
