#include<stdio.h>
#include<math.h>

//#define f(x) (cos(x)-x*exp(x))
//#define df(x) (-sin(x)-x*exp(x)-exp(x))
#define f(x) (x*log10(x)-1.2)
#define df(x) (log10(x)+log10(exp(1)))

int main(){
	float x0,x1,err;
	int i=0;
guess:
	printf("Give initial Guess:- ");
	scanf("%f",&x0);
	if(df(x0)==0)
		goto guess;
	printf("Give absolute error value:- ");
	scanf("%f",&err);
	printf("\nI.\t   X1\t  f(X1)");
	do{
		i++;
		x1=x0-f(x0)/df(x0);
		x0=x1;
		printf("\n%d\t%.5f\t  %.5f",i,x1,f(x1));	
	}while(fabs(f(x1))>err);
	printf("\n\n\t\tX1: %f",x1);
	printf("\n\tf(X1): %f",f(x1));
	return 0;
}
