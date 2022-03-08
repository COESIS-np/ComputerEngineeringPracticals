#include <stdio.h>
//#include <conio.h>

int main()
{
	int n,sum;
	//clrscr();
	do
	{
		printf("\nGive number : ");
		scanf("%d",&n);
		sum = sum + n;
	} while (n>=0);
	printf("\n sum=%d",sum);
	//getch();
}