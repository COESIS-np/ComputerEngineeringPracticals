#include <stdio.h>
#include <conio.h>

void main (){

	int a=4,b=6,x;
	int s;
	s= sizeof(float);
	clrscr();
	printf("%d",s);
	x = (++a)*(b++)+(--a)/(++b);
	printf(" %d %d %d ",a,b,x
	);
	getch();
}