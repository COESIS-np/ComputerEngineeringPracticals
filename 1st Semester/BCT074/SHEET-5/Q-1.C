#include <stdio.h>
//#include <conio.h>

int main()
{
	int n,s=0,rem;
	//clrscr();
	printf("Enter any integer : ");
	scanf("%d",&n);
	do
	{
		rem = n % 10;
		printf("%d",rem );
		s = s + rem;
		n= n/10;
	} while (n!=0);

	printf("\nsum of digits = %d",s);
	//getch();
	return 0;
}
