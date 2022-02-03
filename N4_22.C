#include<conio.h>
#include<stdio.h>

void main()
{
	int mon;
	clrscr();
	printf("enter the month number:- ");
	scanf("%d",&mon);
	if(mon % 2 == 0)
	{
		if(mon == 2)
			printf("28 or 29 day");
		else
			printf("30 days are there");
	}
	else
	{
		printf("31 days are there");
	}
	getch();
}