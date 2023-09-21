#include<stdio.h>
main()
{
	 int a=10, b=20;
	 int *p,*q;
	 p=&a;
	 q=&b;
	 
	 printf("the value of a is %d\n",a);
	 printf("the value of a is %d\n",*p);
      printf("the value of a is %x\n",&a); 
      printf("the value of a is %x\n",p);  
      printf("the value of a is %p\n",p);
	 
 }
