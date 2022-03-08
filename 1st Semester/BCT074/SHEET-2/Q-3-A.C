#include <stdio.h>
#include <conio.h>

void main()
{
	int a = 17293;
	float f= 23.7445889689;
	char str[]="PROGRAMMING";
	clrscr();
	//printing
	printf("+%09d\n",a);
	printf("%-10.2f\n",f);
	printf("%10.4s",str);
	
	getch();
}