#include<conio.h>
#include<stdio.h>

void main()
{
	char str;
	clrscr();
	printf("enter the string:- ");
	scanf("%c",&str);
	if(str >= 65 && str <= 90 || str >=97 && str <= 122)
		printf("alphabet");
	else if(str >= 33 && str <= 47 || str >=58 && str <= 64)
		printf("spacial character");
	else if(str >= 48 && str <= 57)
		printf("digit");
	getch();
}