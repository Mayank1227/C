#include<stdio.h>
int main()
{
	int id,pw;
	printf("piz entr the id");
	scanf("%d ",&id);
	switch(id)

    {
       case 0:
	   printf ("enter your password");
	   scanf("%d",&id);
	   switch (pw)
	   {
	   	    case 1:
	   		printf ("welcome to the page");
	   		break;
	   		default:
	   		printf("incorrect password");
	   		break;
	   		
	   }
	   break;
	   default:
	   {
	   	printf ("incorrect id");
	   	break;
	   }
	}	
}
