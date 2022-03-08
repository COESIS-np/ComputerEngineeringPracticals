#include<stdio.h>

#define f(x,y) (y-x)/(y+x)

int main(){
	float xo,yo,h,xn,x,y;
	printf("Give Xo,Yo,h,Xn:  ");
	scanf("%f%f%f%f",&xo,&yo,&h,&xn);
	x=xo;
	y=yo;
	int i=0;
	printf("Eulers MEthod:\n\n");
	printf("dy    (y-x)\n");
	printf("-- =  -----\n");
	printf("dx    (y+x)\n\n");
	printf("-------------------------------------\n");
	printf(" I\t\t  X\t\t   Y\n");
	while(x<=xn){
		printf(" %d\t\t%.5f\t\t%.5f\n",i,x,y);
		y=y+h*f(x,y);
		x=x+h;
		i++;
	}
	printf("%d\t\t%.5f\t\t%.5f\n",i,x,y);
	return 0;
}
