// modified question 4 to give prime numbers in beteen 100 to 1000
#include <stdio.h>
//#include <conio.h>
int check(int);

int main(){
	int num,result;
	//clrscr();
	for (num = 100; num < 1000; num++)
	{
		result=check(num);
		if(result==1){
			printf("%d\t", num );
		}
	}

	//getch();
	return 0;
}
int check(int n){
	int i,k;
	k=n;
	for (i = 2; i < n; ++i)
	{
		if (n%i==0)
		{
			return 0;
		}
	}
	return 1;
}