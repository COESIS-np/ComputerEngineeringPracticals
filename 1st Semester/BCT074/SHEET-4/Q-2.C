#include <stdio.h>
//#include <conio.h>

int main()
{
	int n, i, s = 0;
	//clrscr();
	printf("Enter any integer : ");
	scanf("%d",&n);
	//clrscr();
	
	printf("i\t" );
	printf("s\n" );

	for (i = 0; i <= n; ++i)
	{
		printf("%d\t",i );
		s = s+i;
		printf("s = %d\n",s);
	}
	//getch();
	return 0;
}
