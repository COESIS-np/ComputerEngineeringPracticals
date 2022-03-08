#include <stdio.h>
#include <conio.h>

void main()
{
	char letter;
	int asc;
	clrscr();
	printf("Give me the letter\n");
	letter = getchar();
	asc = letter ;
	if (asc>=65 && asc<=90)
	{
		printf("It is Uppercase\n");
		printf("The lowercase is : %c \n",asc+32 );
	}
	else if (asc>=97 && asc<=122)
	{
		printf("It is lowercase\n");
		printf("The Uppercase is : %c \n",asc-32 );
	}
	else{
		printf("It is not a letter\n");
	}

	getch();
}