#include<stdio.h>
int main()
{
	char username[20],email[20],password[20],cpassword[20];
	printf("enter your username:");
	gets(username);
	printf("\nenter your email");
	gets(email);
	printf("\n enter your password");
	gets (password);
	printf("\nenter your cpassword");
	gets (cpassword);
	
	if(strcmp(password,cpassword)==0)
	{
		printf("\nusername=%s",username);
     	printf("\nemail=%s",email);
		printf("\password=%s",password);
		printf("\ncpassword=%s",cpassword);
	}
	else
	{
		printf("password and confirm password dose not matched!");
	}
}
