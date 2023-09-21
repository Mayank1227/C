//find factiorial of n using while loop..

#include<stdio.h>
 int main()
{
	int n,i, fact=1;
	printf("enter the number");
	scanf ("%d",&n);
	i=1;
	while(i<=n)
	{
		fact=fact*i;
		i++;
		
	}
	printf("the fatorial of %d is %d\n",n, fact);
	return 0;
}
