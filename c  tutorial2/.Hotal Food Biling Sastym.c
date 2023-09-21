#include<stdio.h>
#include<stdbool.h>
int main()
{
	int food,qnt,price,amt,tot=0;
	printf("**  Rjvadi Restoant**\n");
	bool status=true;
	while (status)
	{
		printf("------menu -----\n");
		printf("1.Pizza   price= 100 rs/pcs\n");
		printf("2.Burrgr   price= 60 rs/pcs\n");
		printf("3.Dhosa price= 70 rs/pcs\n");
		printf("4.Idli  price 40 rs/pcs\n");
		printf("5.sendaviCh   price= 150 rs/pcs\n");
		
		printf ("plse enter your chose...:");
		scanf("%d",&food);
		
		switch(food)
		{
			case 1:
			   printf("you have selected Pizza.");
			   price=100;
			   break;
			   
		     case 2:
			   printf("you have selected Burrge.");
			   price=60;
			   break;
			   
		     case 3:
			   printf("you have selected Dhosa.");
			   price=70;
			   break;
			   
		     case 4:
			   printf("you have selected Idli.");
			   price=40;
			   break;
			   
		     case 5:
			   printf("you have selected SendVich.");
			   price=150;
			   break;
			   
		      default:
			   printf("plase Restart and enter vailid choice");
			   break;
			   
		}
		 printf("\nEnter food quantity");
		 scanf ("%d",&qnt);
		 
		 amt =price*qnt;
		 tot+=amt;
		 
		 printf("Amount=\n, amt");
		 printf("your total amount=%d\n",tot);
	
	  char ord;
	     printf("Do you want place more order...? yes=y&no=n");
		scanf("%s",&ord);
		 
		 switch(ord)
		 {
		 	case 'y':
		 	status=true;
		 	break;
		 	
		 	case'n':
		 	status=false;
		 	break;
		 	
		 } 
	}
	  return 0;
}

