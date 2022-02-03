#include<conio.h>
#include<stdio.h>

void main()
{
	int year;
	clrscr();
	printf("enter the year:- ");
	scanf("%d",&year);
	if(year % 4 == 0 || year % 400 == 0)
	{
		printf("%d year is leap year");
	}
	else
	{
		printf("%d year is not a leap year");
	}
	getch();
}