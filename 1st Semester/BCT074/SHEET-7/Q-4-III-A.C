#include <stdio.h>
//#include <conio.h>
int check(int);

int main(){
	int num,result;
	//clrscr();
	for (int num = 1; num < 1000; num++)
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
	int rev=0,k;
	k=n;
	do{
		rev = rev * 10 + (n % 10);
		n=n/10;
	}
	while(n!=0);
	return (k == rev);
}
