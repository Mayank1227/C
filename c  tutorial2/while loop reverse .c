// while loop reverse..

#include<stdio.h>
int main()
{
int n,r;
printf("enter any numbers: ");
scanf("%d",&n);
while(n>0)
{
r=n%10;
printf("%d",r);
n=n/10;
}
return 0;
}
