#include<conio.h>
#include<stdio.h>

void main()
{
	int a,b;
	clrscr();

	printf("enter the two values:- ");
	scanf("%d %d",&a,&b);
	if(a == b)
	{
		printf("numbers are equal");
	}
	else
	{
		printf("numbers are not equal");
	}
	getch();
}