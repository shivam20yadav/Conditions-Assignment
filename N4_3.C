#include<conio.h>
#include<stdio.h>

void main()
{
	int a;
	clrscr();
	printf("enter the number:- ");
	scanf("%d",&a);
	if(a > 0)
	{
		printf("%d number is positive");
	}
	if(a<0)
	{
		printf("%d number is negative",a);
	}
	getch();
}