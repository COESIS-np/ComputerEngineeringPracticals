#include <stdio.h>
//#include <conio.h>

int main()
{
	int n,s=0,rem,count=0,rev=0,backup;
	int sum_of_fives,avg;
	//clrscr();
	printf("Enter any integer : ");
	scanf("%d",&n);
	backup = n;
	do
	{
		rem = n % 10;
		rev = (rev*10) + rem;

		printf("%d",rem );
		s = s + rem;
		n= n/10;
		count++;

		if (rem == 5)
		{
			sum_of_fives++;
		}

	} while (n!=0);
	avg = s/count;

	printf("\nsum of digits = %d\n",s);
	printf("There are %d digits.\n",count );
	printf("There are %d fives.\n",sum_of_fives );
	printf("The average of the digits is %d\n",avg );

	if (rev == backup)
	{
		printf("The number is  a palindrome.\n");
	}
	else{
		{
		printf("The number is not a  palindrome.\n");
	}
	}
	//getch();
	return 0;
}
