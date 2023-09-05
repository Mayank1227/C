#include <stdio.h>
int main()
{
	int n, firstdight,lastdigit;
	printf(" enter a number ");
	scanf("%d",&n);
    firstdight=n;
    while( firstdight>=10)
    {
    	 firstdight= firstdight/10;
    }
	printf (" firstdight = %d", firstdight);
	lastdigit=n;
    lastdigit=n% 10;
    printf("lastdigit=%d",lastdigit);
	
	return 0;
}
