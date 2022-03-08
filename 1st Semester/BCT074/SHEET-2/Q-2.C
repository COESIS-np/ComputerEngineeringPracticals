#include <stdio.h>
#include <conio.h>

void main()
{
	int a = 01234;
	float f= 0.234;
	char ch = 'a';
	char str[]="I love Nepal";
	clrscr();
	//printing
	printf("\nInteger Value = %-+15d",a);
	printf("\nFloating value= %g",f);
	printf("\nCharacter = %15c",ch);
	printf("\nString = %5s",str);

	getch();
}