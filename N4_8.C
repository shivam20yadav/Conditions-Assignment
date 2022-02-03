#include<conio.h>
#include<stdio.h>

void main()
{
	int a,b,c;
	clrscr();
	printf("enter the three number :- ");
	scanf("%d %d %d",&a,&b,&c);
	if(a > b)
	{
		if(a > c)
		{
			printf("%d is big",a);
		}
		else
		{
			printf("%d is big",c);
		}
	}
	if(b > a)
	{
		if(b > c)
		{
			printf("%d is big",b);
		}
		else
		{
			printf("%d is big",c);
		}
	}
	getch();
}