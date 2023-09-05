#include <stdio.h>
int main()
{
	int num,count=1;
	printf("enter a number");
	scanf("%d",&num);
	printf("factor of %d are:\n",num);
	while(count <=num)
	{
		if (num%count==0)
		{
			printf ("%d\n",count);
		}
		count++;
	}
	return 0;
}
