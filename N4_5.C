#include<conio.h>
#include<stdio.h>

void main()
{
	int age;
	clrscr();
	printf("enter the person age:- ");
	scanf("%d",&age);
	if(age >= 18)
	{
		printf("person can give vote");
	}
	else
	{
		printf("person can not give vote");
	}
	getch();
}