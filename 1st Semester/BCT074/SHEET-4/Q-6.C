#include <stdio.h>
//#include <conio.h>

int main()
{
	int i,x,n,base=1;
	//clrscr;

	printf("Enter x : ");
	scanf("%d",&x);
	printf("\nEnter power : ");
	scanf("%d",&n);

	//clrscr;

	for (i = 1; i <= n; ++i)
	{
		base = base*x;
	}
	printf("\n %d powered by %d is : %d",x,n,base);
	//getch();
	return 0;
}
