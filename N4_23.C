#include<conio.h>
#include<stdio.h>

void main()
{
	int a,b,c,ch;
	clrscr();
	printf("1.square 2.rectangle 3.parallelogram 4.trapezium");
	printf("\nenter the input:-");
	scanf("%d",&ch);
	if(ch == 1)
	{
		printf("enter the length of side:- ");
		scanf("%d",&a);
		printf("area of square:- %d",(a*a));
	}
	else if(ch == 2)
	{
		printf("enter the length and width:- ");
		scanf("%d %d",&a,&b);
		printf("area of rectangle:- %d",a*b);
	}
	else if(ch == 3)
	{
		printf("enter the base and height:- ");
		scanf("%d %d",&a,&b);
		printf("area of parallelogram:- %d",a*b);
	}
	else if(ch == 4)
	{
		printf("enter the length of parallel sides and height:- ");
		scanf("%d %d %d",&a,&b,&c);
		printf("area of trapezium:- %f",(float)0.5*(a*b)*c);
	}
	else
		printf("invlaid");
	getch();
}