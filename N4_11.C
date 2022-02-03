#include<stdio.h>
#include<conio.h>
#include<math.h>
void main ()
{
	float a,b,c,d,e,f;
	clrscr();
	printf ("enter the values of a b c:- ");
	scanf ("%f %f %f", &a, &b, &c);
	d= b*b - 4*a*c;
	if (d>0)
	{
		e = -b+sqrt (d) / (2*a);
		f = -b-sqrt (d) / (2*a);
		printf ("The real roots = %f %f", e, f);
	}
	else if (d==0)
	{
		e = -b/(2*a);
		f = -b/(2*a);
		printf ("roots are equal =%f %f", e, f);
	}
	else
		printf("Roots are imaginary");
	getch ();
}
