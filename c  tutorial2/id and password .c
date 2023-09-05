#include<stdio.h>
int main()
{
	int  id ,password;
	acanf ("%d",&id);
	switch(id)
	
	{
		case 0:
		printf ("enter your password");
		scanf("%d",&password);
		switch (password)
		
		{
			case 1:
			printf("welcome to the page");
			break;
			default:
			printf("ncorrect password");
			break;
		}
		break;
		default:
			
			{
				printf (" incorrect id");
				break;
			}
	}
	          return 0;
}
