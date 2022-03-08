#include<stdio.h>
//#include<math.h>

#define f(x) (x*x*x-2*x-5)

int main(){
	float x1,x2,x3,err;
	printf("Give two initial Guesses:- ");
	scanf("%f%f",&x1,&x2);
	printf("Give absolute error value:- ");
	scanf("%f",&err);
	do{
		x3=(x1*f(x2)-x2*f(x1))/(f(x2)-f(x1));
		x1=x2;
		x2=x3;
	}while( fabs( (x3-x1)/x3 )>err);
	printf("The root is: %f",x3);
	return 0;
}
