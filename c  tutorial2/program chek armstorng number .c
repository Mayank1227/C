#include <stdio.h>
int main()
{
   	int n,sum=0,r ,c;
   	printf ("enter any number");
   	scanf ("%d",&n);
   	c=n;
   	while(n>0)
   	
   	{
   		r=n%10;
   		sum =(r*r*r)+sum;
   		n=n/10;
	}
	if (c= sum)
	{
		printf("amstrong");
	}
	else
	{
		printf(" not amstrong");
		
	}
	return 0;
}
