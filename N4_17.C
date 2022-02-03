#include<conio.h>
#include<stdio.h>
void main()
{
	char ch;
	clrscr();
	printf("enter the day number:[1-7]- ");
	scanf("%c",&ch);
	if(ch == '1')
		printf("Monday");
	else if(ch == '2')
		printf("Tuesday");
	else if(ch == '3')
		printf("Wednesday");
	else if(ch == '4')
		printf("Thursday");
	else if(ch == '5')
		printf("Friday");
	else if(ch == '6')
		printf("saturday");
	else if(ch == '7')
		printf("Sunday");
	else
		printf("invalid input");
	getch();
}