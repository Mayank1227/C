#include<stdio.h>
main()
{
	char name[20];
	printf("enter your name:");
	gets(name);
	printf("\nname=%s",name);
	
	//printf("\nuppercase=%s",strupr(name));
	//printf("n\lowercase=%s",strlwr(name));
	//printf("n\lenthcase=%s",strlen(name));
	printf("\nreverse=%s",strrev (name));
	
}
