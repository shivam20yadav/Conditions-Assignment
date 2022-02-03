#include<conio.h>
#include<stdio.h>

void main()
{
	int height;
	clrscr();
	printf("enter the person height:- ");
	scanf("%d",&height);
	if(height > 120 && height < 150 )
		printf("small");
	else if(height >150 && height < 180)
		printf("medium");
	else
		printf("large");

	getch();
}