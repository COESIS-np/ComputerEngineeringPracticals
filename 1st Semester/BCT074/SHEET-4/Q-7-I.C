#include <stdio.h>
//#include <conio.h>

int main()
{
	int i,n;
	long double sum = 0;
	//clrscr;

	printf("Enter n : ");
	scanf("%d",&n);

	//clrscr;

	for (i = 1; i <=n; i++)
	{
		sum = sum + (1/((long double) i));
	}
	printf("The sum of the series is : %Lf",sum);
	//getch();
	return 0;
}
