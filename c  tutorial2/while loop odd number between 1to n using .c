//printf odd numbers between 1 to n using while loop..

#include<stdio.h>
main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	int i=1;
	printf ("the odd numbers are");
	while(i<n)
	{
		if(i%2!=0)
		{
			printf ("%d",i);
			
		}
		i++;
		
	}
	return 0;
}
