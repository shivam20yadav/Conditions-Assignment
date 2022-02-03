#include<conio.h>
#include<stdio.h>
void main()
{
	float temp;
	clrscr();
	printf("enter the temperature:- ");
	scanf("%f",&temp);
	if(temp <= 0)
		printf("freezing weather");
	else if(temp > 0 && temp <= 10)
		printf("very cold weather");
	else if(temp >10 && temp <= 20)
		printf("cold weather");
	else if(temp > 20 && temp <= 30)
		printf("normal weather");
	else if(temp > 30 && temp <= 40)
		printf("hot");
	else
		printf("very hot");
	getch();
}