#include <stdio.h>
#include <conio.h>

void main()
{
	char name[20],d;
	clrscr();
	puts("Enter Your Name:");
	gets(name);
	puts("\nGive me a character: ");
	d = getchar();
	puts("The First Character is:");
	putch(name[0]);
	getch();
}