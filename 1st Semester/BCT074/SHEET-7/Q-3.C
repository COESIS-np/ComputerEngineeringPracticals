#include <stdio.h>
//#include <conio.h>

int smallest(int,int,int);
int main(){
	int a,b,c;
	//clrscr();
	printf("Give me three numbers\n");
	scanf("%d %d %d",&a,&b,&c);
	printf("The smallest is :%d \n",smallest(a,b,c));
	//getch();
	return 0;
}
int smallest(int x,int y, int z){
	if(x<y && x<z){
		return x;
	}
	else if (y<x && y<z){
		return y;
	}
	else{
		return z;
	}
}