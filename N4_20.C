#include<conio.h>
#include<stdio.h>

void main()
{
	short mon;
	clrscr();
	printf("Enter th month number[1-12]:- ");
	scanf("%d",&mon);
	if(mon == 1)
		printf("January");
	else if(mon == 2)
		printf("February");
	else if(mon == 3)
		printf("March");
	else if(mon == 4)
		printf("April");
	else if(mon == 5)
		printf("May");
	else if(mon == 6)
		printf("June");
	else if(mon == 7)
		printf("July");
	else if(mon == 8)
		printf("August");
	else if(mon == 9)
		printf("September");
	else if(mon == 10)
		printf("October");
	else if(mon == 11)
		printf("November");
	else
		printf("December");
	getch();
}