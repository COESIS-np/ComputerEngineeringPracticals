#include <stdio.h>
//#include <conio.h>

int main()
{
	int n,s=0,rem=0,count=0,rev=0,backup;
	//clrscr();
	printf("Enter any integer : ");
	scanf("%d",&n);
	backup = n;
	do
	{
		rem = n % 10;
		rev = rev*10 + rem;
		printf("%d",rem);
		s = s + rem;
		n = n/10;
		count++;

	} while (n!=0);

	printf("\nsum of digits = %d",s);
	printf("\nThere are %d digits\n",count );

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