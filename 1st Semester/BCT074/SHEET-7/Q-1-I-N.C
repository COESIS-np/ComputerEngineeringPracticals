//This program deliberately contains error
//since it is analysis program *-N.C
#include <stdio.h>
//#include <conio.h>
int sum(int,int);

int main()
{
	int a , b , c , x , y;
	//clrscr();
	printf("Enter three numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	x=sum(a,b);
	y=sum(x,c);
	printf("The final sum is %d",y);
	//getch();
	return 0;
}
int sum(int u,int v){
	int s;
	s=u+v;
	return s;
}