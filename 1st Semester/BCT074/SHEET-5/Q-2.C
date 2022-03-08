// Something I've got to say : 
// This is the most stupid question i have ever seen.
#include <stdio.h>
//#include <conio.h>

int main()
{
	int n , sum = 0;
	//clrscr();
	while(sum<100){
		printf("Enter the number.\n");
		scanf("%d",&n);
		sum+=n;
	}
	sum = sum-n;
	printf("\n sum = %d",sum);
	//getch();
}
