#include<conio.h>
#include<stdio.h>
void main()
{
	int a,b,tot;
	char ch;
	clrscr();
	printf("enter the two value:- ");
	scanf("%d %d",&a,&b);
	fflush(stdin);
	printf("enter the choice:[+,-,*,/]- ");
	scanf("%c",&ch);
	if(ch == '+')
		printf("%d + %d = %d",a,b,a+b);
	if(ch == '-')
		printf("%d - %d = %d",a,b,a-b);
	if(ch == '*')
		printf("%d * %d = %d",a,b,a*b);
	if(ch == '/')
		printf("%d / %d = %d",a,b,a/b);
	getch();
}