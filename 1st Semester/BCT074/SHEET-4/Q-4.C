#include <stdio.h>
//#include <conio.h>

int main()
{
	int i,m,sum=0, square;
	//clrscr;

	printf("Enter upto which natural number : ");
	scanf("%d",&m);

	//clrscr;

	for (i = 1; i <= m; ++i)
	{
		square = i * i;
		sum = sum + square;
	}
	printf("\n the sum of the squares of first %d natural numbers is : %d",m,sum);
	//getch();
}
