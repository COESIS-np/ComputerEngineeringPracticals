#include <stdio.h>
//#include <conio.h>

int factorial(int);
int main(){
	int num ;
	//clrscr();
	printf("Give me the number.\n");
	scanf("%d",&num);
	printf("The factorial is :%d \n",factorial(num));
	//getch();
	return 0;
}
int factorial(int x){
	int i,fac = 1;
	for (i = 1; i <= x; i++){
		fac = fac * i;
	}
	return fac;
}