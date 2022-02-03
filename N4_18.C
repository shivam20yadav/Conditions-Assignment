#include<conio.h>
#include<stdio.h>

void main()
{
	char num;
	clrscr();
	printf("enter the digit[0-9]:- ");
	scanf("%c",&num);

	if(num == '0')
		printf("zero");
	else if(num == '1')
		printf("one");
	else if(num == '2')
		printf("two");
	else if(num == '3')
		printf("three");
	else if(num == '4')
		printf("four");
	else if(num == '5')
		printf("five");
	else if(num == '6')
		printf("six");
	else if(num == '7')
		printf("seven");
	else if(num == '8')
		printf("eight");
	else if(num == '9')
		printf("nine");
	getch();
}