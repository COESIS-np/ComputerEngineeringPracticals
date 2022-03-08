#include <stdio.h>
//#include <conio.h>

int main()
{
	int i,j,m,n, x = 1, factorial = 1;
	double sum;
	//clrscr;

	printf("Enter n : ");
	scanf("%d",&n);

	//clrscr;

	for (i = 1; i <=n; ++i){

		for (j = 1; j <=i; ++j){
			x = x * i;
		}
		
		for (m = 1; m <=i; ++m){
			factorial = factorial * m;
		}
		
		sum = sum + ((double)(x)) /((double) (factorial));
		factorial = 1;
		x = 1;
	}
	printf("\n The sum of the series is %f ",sum);
	//getch();
	return 0;
}
