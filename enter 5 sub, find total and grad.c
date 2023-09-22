#include <stdio.h>
int main()
{
    int phy, chem, bio, math, comp,total,per; 
    printf("enter your phy marks: ");
    scanf("%d",&phy);
    printf("enter your chem marks: ");
    scanf("%d",&chem);
    printf("enter your bio marks: ");
    scanf("%d",&bio);
    printf("enter your math marks: ");
    scanf("%d",&math);
    printf("enter your phy comp: ");
    scanf("%d",&comp);
    total = (phy + chem + bio + math + comp);
	printf("%d+%d+%d+%d+%d=%d",phy, chem, bio, math, comp,total);
	per=total/5.0;
    printf("Percentage = %d", per);
    if(per >= 90)
    {
        printf("Grade A");
    }
    else if(per >= 80)
    {
        printf("Grade B");
    }
    else if(per >= 70)
    {
        printf("Grade C");
    }
    else if(per >= 60)
    {
        printf("Grade D");
    }
    else if(per >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}

