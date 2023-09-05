#include<stdio.h>
int main()
{
	 int n, firstdigit,lastdigit;
	 printf ('enter numbers');
	 scanf("%d",&n)	;
	 firstdigit =n;
	 while (firstdigit>=10)
	 {
	 	firstdigit =firstdigit/10;
	 	
	 }
	 printf ("firstdigit=%d",firstdigit);
	 lastdigit =n;
	 lastdigit=n%10;
	 printf ("lastdigit= %d, lastdigit");
	 return 0;
}

