#include<conio.h>
#include<stdio.h>

void main()
{
	int id,unit;
	char *name;
	clrscr();
	printf("enter the id:- ");
	scanf("%d",&id);
	fflush(stdin);
	printf("enter the name:- ");
	gets(name);
	printf("enter the unit:- ");
	scanf("%d",&unit);
	if(unit <= 199)
	{
		if((unit*1.20) > 100)
		{
			printf("\nCustmoer IdNo: %d",id);
			printf("\nCustmoer Name: %s",name);
			printf("\nUnit consumed: %d",unit);
			printf("\nAmount Charges @Rs.1.2 per unit:%.2f",(float)(unit*1.2));
			printf("\nNet amount paid By the Custmore:%.2f",(float)unit*1.2);
		}
		else
		{
			printf("minimum bill should be of Rs.100/-");
		}
	}
	else if(unit >=200 && unit <400)
	{
		if((unit*1.5) > 400)
		{
			printf("\nCustmoer IdNo: %d",id);
			printf("\nCustmoer Name: %s",name);
			printf("\nUnit consumed: %d",unit);
		printf("\nAmount Charges @Rs.1.5 per unit:%.2f",(float)(unit*1.5));
			printf("\nSurcharge Amount: 240.00");
		printf("\nNet Amount Paid By the Custmoer:%.2f",(float)(unit*1.5)+240);

		}
		else
		{
			printf("\nCustmoer IdNo: %d",id);
			printf("\nCustmoer Name: %s",name);
			printf("\nUnit consumed: %d",unit);
			printf("\nAmount Charges @Rs.1.5 per unit:%.2f",(float)(unit*1.5));
			printf("\nNet amount paid By the Custmore:%.2f",(float)unit*1.5);
		}
	}
	else if(unit >= 400 && unit <= 600)
	{
		printf("\nCustmoer IdNo: %d",id);
		printf("\nCustmoer Name: %s",name);
		printf("\nUnit consumed: %d",unit);
		printf("\nAmount Charges @Rs.1.8 per unit:%.2f",(float)(unit*1.8));
		printf("\nSurcharge Amount: 240.00");
		printf("\nNet Amount Paid By the Custmoer:%.2f",(float)(unit*1.8) + 240);
	}
	else if(unit >= 600)
	{
		printf("\nCustmoer IdNo: %d",id);
		printf("\nCustmoer Name: %s",name);
		printf("\nUnit consumed: %d",unit);
		printf("\nAmount Charges @Rs.1.8 per unit:%.2f",(float)(unit*1.8));
		printf("\nSurcharge Amount: 240.00");
		printf("\nNet Amount Paid By the Custmoer:%.2f",(float)(unit*1.8) + 240);
	}
	getch();
}