#include <stdio.h>
//#include <conio.h>

int main()
{
	int i,n,x,j;
	double sum;
	//clrscr;

	printf("Enter n : ");
	scanf("%d",&n);

	//clrscr;

	for (i = 1; i <=n; ++i){

		for (j = 1; j <=i; ++j){
			x = x * i;
		}

		sum = sum + ((double)x/ (double)i);
	}
	printf("\n The sum of the series is %f ",sum);
	//getch();
	return 0;
}
