#include <stdio.h>
//#include <conio.h>

int main()
{
	int n , sum = 0,neg_sum=0,pos_sum=0,ncount=0,pcount=0;
	int pavg,navg;
	//clrscr();
	while(sum<100){
		printf("Enter the number.\n");
		scanf("%d",&n);
		sum+=n;
		if (n<0)
		{
			neg_sum+=neg_sum;
			ncount++;
		}
		else{
			pos_sum+=pos_sum;
			pcount++;
		}
	}
	sum = sum-n;
	pavg = pos_sum/pcount;
	navg = neg_sum/ncount;
	printf("The average of negative numbers is: %d \n",navg );
	printf("The average of positive numbers is: %d \n",pavg );
	printf("\n sum = %d",sum);

	//getch();
}