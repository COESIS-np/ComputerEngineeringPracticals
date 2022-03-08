#include<stdio.h>
#include<math.h>
#define f(x) (x*x*x-4*x-9)

int main(){
	float a,b,c,err;
	int i=0;
	printf("Give error pt, value:- ");
	scanf("%f",&err);
guess:
	printf("Give tw0 initial guesses:- ");
	scanf("%f%f",&a,&b);
	if(f(a)*f(b)>0){
		printf("Guesses are wrong!!\n");
		goto guess;
	}
	printf("\nI\t   a\t   b\t   c\t    f(a)\t    f(b)\t     f(c)");
	do{
		c=(a+b)/2;
		i++;
		printf("\n%d\t%.5f\t%.5f\t%.5f\t   %.5f\t  %.5f\t  %.5f",i,a,b,c,f(a),f(b),f(c));
		if(f(a)*f(c)<0)
			b=c;
		else
			a=c;
	}while(fabs(f(c))>err);
	printf("\n\n\t\tTHe root is %.5f",c);
	return 0;
}
