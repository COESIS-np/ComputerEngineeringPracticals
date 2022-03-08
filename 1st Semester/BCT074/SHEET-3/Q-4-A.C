#include <stdio.h>
#include <conio.h>

void main()
{
	int num;
	clrscr();
	printf("Give me the number: ");
	scanf("%f",&num);
	if (num%3==0)
	{
		if (num%7==0)
		{
			if(num>250){
				printf("The number is divisible by 3 , by 7 and is greater than 250\n");
			}
			else{
				printf("The number is divisible by 3 , by 7 and is not greater than 250\n");
			}
		}
		else{
			if (num > 250)
			{
				printf("The number is only divisible by 3 , not 7 and is greater than 250\n");
			}
			else {
				printf("The number is only divisible by 3 , not 7 but is greater than 250\n");
			}
		}
	}
	else{
		if (num%7==0)
		{
			if(num>250){
				printf("The number is not divisible by 3 , by 7 and is greater than 250\n");
			}
			else{
				printf("The number is not divisible by 3 , by 7 and is not greater than 250\n");
			}
		}
		else{
			if (num > 250)
			{
				printf("The number is not divisible by 3 , not 7 and is greater than 250\n");
			}
			else {
				printf("The number is not divisible by 3 , not 7 but is greater than 250\n");
			}
		}
	}
	getch();
}