#include<conio.h>
#include<stdio.h>

void main()
{
	int a;
	clrscr();
	printf("enter the number:- ");
	scanf("%d",&a);
	if(a % 2 == 0)
	{
		printf("%d is even",a);
	}
	else
	{
		printf("%d is odd",a);
	}
	getch();
}