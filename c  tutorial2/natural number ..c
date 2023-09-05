#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("input value");
	scanf("%d",&n);
	printf("\nthe first %d naural number are\n",n);
	for (i=1;i<n ;i++)
	{
		printf ("%d",i);
		sum +=1;
	}
	printf ("\nthe sum of nutural number are: %d\n",n,sum);
	
	return 0;
}
