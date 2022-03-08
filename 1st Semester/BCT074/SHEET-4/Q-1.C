#include <stdio.h>
// #include <conio.h>

int main()
{
	int n, i, s = 0;
	//clrscr;
	printf("Enter a integer : ");
	scanf("%d",&n);
	for (i = 0; i <= n; ++i)
	{
		printf("%d",i );
		s = s+i;
	}printf("\ns = %d",s);
	
	//getch();
	return 0;
}
