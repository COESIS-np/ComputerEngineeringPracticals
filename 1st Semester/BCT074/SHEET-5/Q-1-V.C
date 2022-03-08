#include <stdio.h>
//#include <conio.h>

int main()
{
	int n,s=0,rem,count=0,rev=0,backup;
	int sum_of_5=0,avg,is_even = 0;
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
			sum_of_5++;
		}
		
		if (count == 3 && (rem % 2 == 0))
		{
			is_even = 1;
		}
		

	} while (n!=0);
	avg = s/count;

	printf("\nsum of digits = %d\n",s);
	printf("There are %d digits.\n",count );
	printf("There are %d fives.\n",sum_of_5 );
	printf("The average of the digits is %d\n",avg );

	if (rev == backup)
	{
		printf("The number is  a palindrome.\n");
	}
	else{
		{
		printf("The number is not a  palindrome.\n");
	}
	if (is_even ==1)
	{
		printf("The third digit is even.\n");
	}
	else{
		printf("The third digit is odd.\n");
	}
	}
	//getch();
	return 0;
}