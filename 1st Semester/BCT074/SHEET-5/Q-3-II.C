#include <stdio.h>
//#include <conio.h>

int main()
{
	int n,sum,sum_of_even,sum_of_odd,even,odd,count;
	//clrscr();
	do
	{
		printf("\nGive number : ");
		scanf("%d",&n);

		sum = sum + n;
		count++;
		if (n%2==0)
		{
			sum_of_even+=n;
			even++;
		}
		else {
			sum_of_odd+=n;
			odd++;
		}
	} while (n != -1);

	printf("\n sum of all numbers=%d",sum);
	printf("\nYou gave me %d numbers.\n",count);
	printf("sum of even numbers is %d\n",sum_of_even);
	printf("total number of even numbers is %d\n",even );
	printf("sum of odd numbers is %d\n",sum_of_odd );
	printf("total number of odd numbers is %d\n",odd );
	//getch();
	return 0;
}