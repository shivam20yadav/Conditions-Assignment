#include<conio.h>
#include<stdio.h>

void main()
{
	int m,n;
	clrscr();
	printf("enter the number:- ");
	scanf("%d",&m);
	if(m > 0)
		n = 1;
	else if(m == 0)
		n = 0;
	else
		n = -1;
	printf("%d",n);
	getch();
}