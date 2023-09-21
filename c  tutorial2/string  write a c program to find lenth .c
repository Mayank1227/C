//write a c program to find length of a string ..

#include<stdio.h>
int main()
{
	char a[50];
	int i=0;
	printf ("enter your name");
	scanf("%s",&a);
	while(a[i]!='\0')
	i++;
	{
		printf("\n total num of characters=%d,i");
	}
	return 0;
	
}
