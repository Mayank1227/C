// Five num sum:

#include<stdio.h>
int main()
{
int number[10];
int i;
int sum=0;
for(i=0;i<10;i++)
{
printf("enter five num: ");
scanf("%d",&number[i]);
sum+=number[i];
}
printf("%d",sum);
}

