#include <stdio.h>
#include <conio.h>

void main()
{
	char letter;
	int asc;
	clrscr();
	printf("Give me a character\n");
	letter = getchar();
	asc = letter ;
	if ((asc>=65 && asc<=90)||(asc>=97 && asc<=122))
	{
		printf("It is a letter\n");
	}
	else if ((asc>=48 && asc<=57))
	{
		printf("It is a number\n");
	}
	else{
		printf("It is a special character\n");
	}

	getch();
}