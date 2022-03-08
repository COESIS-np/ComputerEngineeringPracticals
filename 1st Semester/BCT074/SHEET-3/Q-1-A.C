#include <stdio.h>
#include <conio.h>

void main()
{
	int num,last;
	clrscr();
	printf("Give me the number\n");
	scanf("%d",&num);
	last = num%10;
	if (last%2==0)
	{
		printf("The last digit is even.\n");
	}
	else{
		printf("The last digit is odd\n");
	}
	getch();
}