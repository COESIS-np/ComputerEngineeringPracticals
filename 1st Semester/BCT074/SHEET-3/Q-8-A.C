#include <stdio.h>
#include <conio.h>

void main()
{
	int hour,wage;
	clrscr();
	printf("Give me the working hour\n");
	scanf("%d",&hour);
	
	if (hour<8)
	{
		wage = 10*hour -8;
	}
	else if (hour>8)
	{
		wage = 10*hour+50;
	}
	else{
		wage = 10*hour;
	}
	printf("The wage of your worker is : %d\n",wage );
	getch();
}