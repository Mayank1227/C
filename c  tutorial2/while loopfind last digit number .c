//Program to find last digit of a number...

#include<stdio.h>
int main()
{
int n,lastdigit;
printf("enter any numbers: ");
scanf("%d",&n);
lastdigit=n%10;
printf("lastdigit=%d",lastdigit);
return 0;
}
