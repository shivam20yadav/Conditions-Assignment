#include<conio.h>
#include<stdio.h>

void main()
{
	int maths,phy,chem;
	int tot,tot1;
	clrscr();
	printf("enter the maths,phy,chem marks:- ");
	scanf("%d %d %d",&maths,&phy,&chem);
	tot = maths+phy+chem;
	tot1 = maths+phy;
	if(maths >=65 && phy >=55 && chem >= 50)
	{
		if(tot >=190 || tot1 >=140)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
	}
	else
	{
		printf("not");
	}
	getch();
}