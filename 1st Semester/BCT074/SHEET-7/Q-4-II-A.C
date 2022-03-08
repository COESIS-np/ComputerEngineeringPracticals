#include <stdio.h>
//#include <conio.h>
int check(int);

int main(){
	int num,result;
	//clrscr();
	printf("Enter a number");
	scanf("%d",&num);
	result=check(num);
	if(result==1){
		printf("The number is palindrome.\n");
	}
	else{
		printf("The number is palindrome.\n");//improvisation . Don't ask why. lol
	}

	//getch();
	return 0;
}
int check(int n){
	int rev,k;
	k=n;
	do{
		rev = rev * 10 + (n % 2);
		n= n/10;
	}
	while(n);
	printf ("%d",k == rev);
	return (k==rev) ;
}
