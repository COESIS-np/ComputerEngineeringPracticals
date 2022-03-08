#include <stdio.h>
//#include <conio.h>

int main()
{
	int i,m, n,seven=0, sodd = 0;
	//clrscr;
	printf("Enter first integer : ");
		scanf("%d",&m);

	printf("Enter second integer : ");
		scanf("%d",&n);

		//clrscr;

	for (i = m; i <= n; ++i)
	{
		if (i%2 == 0)
		{
			seven = seven + i;
		}
		else{
			sodd = sodd + i;
		}
	}
	printf("\n The sum of even numbers are : %d",seven);
	printf("\n The sum of odd numbers are : %d",sodd);

	//getch();
}
