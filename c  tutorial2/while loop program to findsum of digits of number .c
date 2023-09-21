// while loop Program to find sum of digits of a number..

#include<stdio.h>
int main()
{
int n,sum=0,r;
printf("enter any numbers: ");
scanf("%d",&n);
while(n>0)
{
r=n%10;
sum=sum+r;
n=n/10;
}
printf("sum of digits: %d",sum);
return 0;
}
