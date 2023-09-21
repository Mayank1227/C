// write a c program to convert lowercase string uppercase..

#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i;
	printf("\n enter a string:");
	gets(s);
	
	for (i=0;s[i]!='\0';i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		{
			s[i]=s[i]-32;
		}
	}
	printf("\n string in upper case=%s",s);
	return 0;
}
	
	
	

