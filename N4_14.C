#include<conio.h>
#include<stdio.h>

void main()
{
	int a,b,c,sum;
	clrscr();
	printf("enter the triangle three angles:- ");
	scanf("%d %d %d",&a,&b,&c);
	if((a+b+c) == 180)
		printf("we can make triangle");
	else
		printf("can not make triangle");
	getch();
}