#include<stdio.h>
void multiply()     //FUNCTION  DECLARATION
{
	int a,b;
	printf("\n enter the value of a and b:");
	scanf ("%d%d", &a ,&b);
	printf ("\n the multilpication of a and b is %d", a*b);
}
main()
{
  multiply();      //FUNCTION CALLING    
  multiply();    
  multiply();
}

