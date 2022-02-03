#include<conio.h>
#include<stdio.h>

void main()
{
	char str;
	clrscr();
	printf("Enter the char[A-Z a-z]:- ");
	scanf("%c",&str);
	if(str >= 65 && str <= 92)
		printf("Uppercase");
	if(str >=97 && str <= 122)
		printf("lowercase");
	getch();
}