#include <stdio.h>
int main()
{
	int n, k;
	printf(" enter a number ");
	scanf("%d",&n);
     k=n;
    while( k>=10)
    {
    	k=k/10;
	}
	
	printf ("k=%d",k);
	
	return 0;
}
