#include <stdio.h>
//#include <conio.h>

int main()
{
	int i,factorial=1,n;
	//clrscr;

	printf("factorial of which number ? ");
	scanf("%d",&n);

	//clrscr;

	for (i = 1; i <=n; ++i)
	{
		factorial = factorial * i;
	}
	printf("\n the factorial of %d is : %d",n,factorial);
	//getch();
}
