#include <stdio.h>
#include <conio.h>

void main()
{
	long int num,backup,rev=0;
	clrscr();
	printf("Give me a four digit number\n");
	scanf("%d",&num);
	backup = num;
	
	do{
		rev = rev*10+(num%10);
		num = num/10;
	}
	while(num);

	if (rev == backup)
	{
		printf("It is a palindrome.");
	}
	else{
		printf("It is not a palindrome.");
	}
	getch();
}