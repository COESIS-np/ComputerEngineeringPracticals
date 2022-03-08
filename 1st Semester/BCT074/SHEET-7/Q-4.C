// As vague as the program might seem the program prints the given
// number if it is prime
#include <stdio.h>
//#include <conio.h>
int check(int);

int main(){
	int num,result;
	//clrscr();
	printf("Enter a number:");
	scanf("%d",&num);
	result=check(num);
	if(result==1){
		printf("%d\n", num );
	}
	else{
		printf("Not prime");// question didn't ask this but we can improvise , can't we?
	}
	//getch();
	return 0;
}
int check(int n){
	int i,k;
	k=n;
	for (i = 2; i < n; i++)
	{
		if (n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
