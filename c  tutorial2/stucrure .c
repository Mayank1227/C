#include<stdio.h>
struct person
{
	
	// total size of structure is 28 bytes
	int age;
	char name[20];
	float salary;

};
main()
{
   	struct person p;
    //	scanf("%d %s %f", &p. age ,&p.name,&p.salary);
	//rintf("age=%d\n name=%s\n salary=%f",p.age ,p.name, p.salary);

	printf("enter your age:\n");
	scanf("%d",&p.age);
	printf("age=%d",p.age);
	
	printf("enter your name:\n");
	scanf("%S",&p.name);
	printf("name=%d",p.name);
	
	printf("enter your salary:\n");
	scanf("%F",&p.salary);
	printf("salary=%d",p.salary);
}
