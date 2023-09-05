#include <stdio.h>
int main()
{
	int n, lastdigit;
	printf("enter any number");
	scanf("%d",&n);
	lastdigit=n%10;
	printf("lastdigit =%d",lastdigit);
	return 0;
}
