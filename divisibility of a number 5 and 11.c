int main()
{
	int num;
	printf("enter any numbers: ");
	scanf("%d",&num);
	if((num%5==0)&&(num%11==0))
	{
		printf("num is divisible by 5 and 11");
	}
	else
	{
		printf("num is not divisible by 5 and 11");
	}
	return 0;
}

