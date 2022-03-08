#include <stdio.h>
//#include <conio.h>

int main()
{
	int n,sum,sum_of_even,sum_of_odd,even,odd;
	char bye;
	//clrscr();
	do
	{
		printf("\nGive number : ");
		scanf("%d",&n);

		printf("\nDo you want to exit ? (press <n/N> to exit) : ");
		scanf("%c",&bye);

		sum = sum + n;
		if (n%2==0)
		{
			sum_of_even+=n;
			even++;
		}
		else {
			sum_of_odd+=n;
			odd++;
		}
	} while (bye != 'n' || bye != 'N');

	printf("\n sum=%d",sum);
	printf("sum of even numbers is %d\n",sum_of_even);
	printf("total number of even numbers is %d\n",even );
	printf("sum of odd numbers is %d\n",sum_of_odd );
	printf("total number of odd numbers is %d\n",odd );
	//getch();
}