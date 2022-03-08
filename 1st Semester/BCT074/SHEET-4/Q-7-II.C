#include <stdio.h>
// #include <conio.h>

int main()
{
	int i,n,j, factorial = 1;
	double sum;
	//clrscr;

	printf("Enter n : ");
	scanf("%d",&n);

	//clrscr;

	for (i = 1; i <=n; ++i){

		for (j = 1; j <=i; ++j){
			factorial = factorial *j;
		}
		sum = sum + 1/(double) (factorial);
		factorial = 1;
	}
	printf("\n The sum of the series is %f ",sum);
	//getch();
	return 0;
}
