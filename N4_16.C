#include<conio.h>
#include<stdio.h>
void main()
{
	char *s;
	int i,temp = 0,temp2 = 0;
	clrscr();
	printf("enter the string:- ");
	gets(s);

	for(i=0;s[i]!= '\0';i++)
	{
	if(s[i] == 'a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
			temp++;
		else
			temp2++;
	}
	printf("string:- %s\n",s);
	printf("%d vowel and %d consonant",temp,temp2);
	getch();
}