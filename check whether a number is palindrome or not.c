#include <stdio.h>
int main()
 {
 	int n,c,r, sum =0;
 	printf("enter any numbers");
 	scanf("%d",n);
 	c=n;
 	while(n>0)
 	{
 		r=n%10;
 		sum=r+(sum *10);
 		n=n/10;
 		
	 }
	 if (c==sum)
	 {
	 	printf ("palindrome");
	 	
	 }
	 else
	 {
	 	printf("not palindrome");
	 	
	 }
	 return 0;
 }
