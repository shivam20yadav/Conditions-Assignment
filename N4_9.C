#include<conio.h>
#include<stdio.h>

void main()
{
	int x,y;
	clrscr();

	printf("enter the x and y cord:- ");
	scanf("%d %d",&x,&y);

	if(x > 0 && y > 0)
		printf("%d and %d lies in the first quandart",x,y);
	else if(x < 0 && y > 0)
		printf("%d and %d lies in the second quandart",x,y);
	else if(x < 0 && y < 0)
		printf("%d and %d lies in the third quandart",x,y);
	else if(x > 0 && y < 0)
		printf("%d and %d lies in the fourth quandart",x,y);
	getch();
}