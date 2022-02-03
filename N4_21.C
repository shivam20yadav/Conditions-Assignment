#include<conio.h>
#include<stdio.h>
void main()
{
	char grade;
	clrscr();
	printf("enter the grade:- ");
	scanf("%c",&grade);
	if(grade == 'e' || grade == 'E')
		printf("Excellent");
	else if(grade == 'v' || grade == 'V')
		printf("Very good");
	else if(grade == 'g' || grade == 'G')
		printf("Good");
	else if(grade == 'a' || grade == 'A')
		printf("Average");
	else if(grade == 'F' || grade == 'f')
		printf("Fail");
	else
		printf("invalid input");
	getch();
}